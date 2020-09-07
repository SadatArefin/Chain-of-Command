#include "Family.h"

Family::Family()
{
    //ctor
}
void Family::ask_info()
{
    string asking_place;
    int asking_member;
    Person::ask_info();

    cout<<"Which Quarter will you live in?";
    cin>>asking_place;

    cout<<"How many members will there be?";
    cin>>asking_member;
    setMembers(asking_member);
}
void Family::show_info()
{
    Person::show_info();
    cout<<"Family Members: "<<members<<endl;
    cout<<"Assigned Quarter: "<<endl;
}
