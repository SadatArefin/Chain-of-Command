#include "Visitor.h"

Visitor::Visitor()
{
    //ctor
}

void Visitor::show_info()
{
    Person::show_info();
    cout<<person_of_interest.getName()<<endl<<purpose_of_visit<<endl;
    //visiting time using system time

}
void Visitor::ask_info()
{
    string asking_name;
    Person::ask_info();
    cout<<"Person of Interest?"<<endl;
    cin>>asking_name;
    person_of_interest.setName(asking_name);
    cout<<"Purpose of visit?"<<endl;
    cin>>purpose_of_visit;
}
