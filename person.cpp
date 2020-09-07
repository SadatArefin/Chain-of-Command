#include "Person.h"
#include "Family.h"
#include "Officer.h"
#include "Student.h"
#include "Stuff.h"
#include "Visitor.h"

Person::Person()
{
    //ctor
}
void Person::add_person()
{
    int option, f=0,v=0,s=0,p=0,o=0;
    cout<<"What type of person do you want to add?"<<endl<<"1| Family Members"<<endl<<"2|Visitors "<<endl<<"3| Students"<<endl<<"4| Stuff"<<endl<<"5| Officer"<<endl<<"0| Go Back"<<endl;
     cin>>option;
     if(option==0) return;

     switch(option)
                {
                case 1:
                {
                    Family household[100];
                    household[f].ask_info();
                    f++;
                    break;
                }
                case 2:
                {
                    Visitor inspector[100];
                    inspector[v].ask_info();
                    v++;
                    break;
                }
                case 3:
                {
                    Student studier[100];
                    studier[s].ask_info();
                    s++;
                    break;
                }
                case 4:
                {
                    Stuff professional[100];
                    professional[p].ask_info();
                    p++;
                    break;
                }
                case 5:
                {
                    Officer officeholder[100];
                    officeholder[o].ask_info();
                    o++;
                    break;
                }
                default:
                    break;
                }
}
void Person::ask_info()
{
    string asking_name;
    cout<<"Name?"<<endl;
    cin>>asking_name;
    cout<<"access_level?"<<endl;
    cin>>access_level;
}
void Person::generateID()
{
    srand((unsigned) time(0));
    Person::setID(access_level*1000+rand() % 1000);
}
void Person::show_info()
{
    cout<<"ID: "<<ID<<endl;
    cout<<"Name: "<<name<<endl;
}
