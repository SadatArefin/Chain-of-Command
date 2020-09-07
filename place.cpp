#include "place.h"
place::place()
{

}
void place::AddPlace()
{
    cout << "Enter Name of Place: ";
    cin >> name;
    Setname(name);

    cout << "Enter Place Type: ";
    cin >> type;
    Settype(type);

    cout << "Enter Capacity: ";
    cin >> total_capacity;

    cout << "Enter Minimum Access Level: ";
    cin >> access_level;
}
void place::Place_Info()
{
    cout << "Name of Place: " << Getname() << endl;
    cout << "Type of Place: " << Gettype() << endl;
    cout << "Capacity: " << total_capacity << endl;
    cout << "Min Access: " << access_level << endl;
}
void place::Insert_Person()
{
    if(person_entered >= total_capacity)
        cout << "Place is already filled." << endl;
    else
    {
        cout<<"New persons to enter: "<<endl;

        cin >> new_person;
        person_entered += new_person;
        present_capacity -= new_person;

        cout << "No of person present: " << person_entered << endl;
        cout << "Present capacity: " << present_capacity;
    }

}
void place::Capacity()
{
    cout << "Total Capacity: " << total_capacity << endl;
    cout << "Occupied Capacity: " << person_entered << endl;
    cout << "Present Capacity: " <<  present_capacity << endl;
}
void place::Access_level()
{
    cout << "Present Access Level: " << access_level << endl;
}
void place::Modify_Access_Level()
{
    cout << "Present Access Level: " << access_level << endl;
    cout << "What is the the new access level: ";
    cin >> access_level;
}
