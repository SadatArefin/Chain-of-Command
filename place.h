#ifndef PLACE_H
#define PLACE_H

#include<string>
#include<iostream>
#include<cstdlib>

using namespace std;
class place
{
public:
    int access_level;
    place();
    string Getname()
    {
        return name;
    }
    void Setname(string val)
    {
        name = val;
    }
    string Gettype()
    {
        return type;
    }
    void Settype(string val)
    {
        type = val;
    }
    int Getaccess_level()
    {
        return access_level;
    }
    void Setaccess_level(int val)
    {
        access_level = val;
    }

    void AddPlace();
    void Place_Info();
    void Insert_Person();
    void Capacity();
    void Access_level();
    void Modify_Access_Level();
protected:
    string name;
    int total_capacity;
    int present_capacity;
    int person_entered;
    int new_person;
    string type;

};

#endif // PLACE_H
