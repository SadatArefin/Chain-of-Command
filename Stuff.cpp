#include "Stuff.h"

Stuff::Stuff()
{
    //ctor
}
void Stuff::show_info()
{
    Person::show_info();
}
void Stuff::ask_info()
{
    string asking_profession;
    Person::ask_info();

    cout<<"What's the profession of stuff?";
    cin>>asking_profession;
    setProfession(asking_profession);
}
