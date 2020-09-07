#include "Officer.h"

Officer::Officer()
{
    //ctor
}

void Officer::show_info()
{
    Person::show_info();
    cout<<"Rank:"<<getranks()<<endl<<"Core:"<<getcores()<<endl<<"Height:"<<getheight()<<endl<<"Age:"<<getage()<<endl;
}
void Officer::ask_info()
{
    string vals;
    float valf;
    int vali;

    Person::ask_info();
    cout<<"Rank?"<<endl;
    cin>>vals;
    setranks(vals);

    cout<<"Core?"<<endl;
    cin>>vals;
    setcores(vals);

    cout<<"Age?"<<endl;
    cin>>vali;
    setage(vali);

    cout<<"Height?"<<endl;
    cin>>valf;
    setheight(valf);

}
