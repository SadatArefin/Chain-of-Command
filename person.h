#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class Person
{
public:
    int access_level;

    Person();

    void setaccess_level(int level)
    {
        access_level=level;
    }
    int getaccess_level()
    {
        return access_level;
    }

    void setName(string val)
    {
        name=val;
    }
    string getName()
    {
        return name;
    }

    void setID(int val)
    {
        ID=val;
    }
    int getID()
    {
        return ID;
    }

    void show_info();
    void ask_info();
    void add_person();
    void generateID();

protected:
    int ID;
    string name;
private:

};

#endif // PERSON_H
