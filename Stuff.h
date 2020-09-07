#ifndef STUFF_H
#define STUFF_H

#include <Official.h>


class Stuff : public Official
{
public:
    Stuff();
    void show_info();
    void ask_info();
    void setProfession(string val)
    {
        profession=val;
    }
    string getProfession()
    {
        return profession;
    }
protected:

private:
    string profession;
};

#endif // STUFF_H
