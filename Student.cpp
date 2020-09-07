#include "Student.h"

Student::Student()
{
    //ctor
}

void Student::show_info()
{
    Person::show_info();
    cout<<"Study Level: "<<getstudy_level()<<endl<<"CGPA"<<getcgpa()<<endl;
}
void Student::ask_info()
{
    string vals;
    float valf;
    Person::ask_info();

    cout<<"Study Level?"<<endl;
    cin>>vals;
    setstudy_level(vals);

    cout<<"CGPA?"<<endl;
    cin>>valf;
    setcgpa(valf);
}
