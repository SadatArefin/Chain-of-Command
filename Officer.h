#ifndef OFFICER_H
#define OFFICER_H

#include <Official.h>


class Officer : public Official
{
public:
    Officer();
    void show_info();
    void ask_info();

    void setranks(string val)
    {
        ranks=val;
    }
    string getranks()
    {
        return ranks;
    }

    void setcores(string val)
    {
        cores=val;
    }
    string getcores()
    {
        return cores;
    }

    void setheight(float val)
    {
        height=val;
    }
    float getheight()
    {
        return height;
    }

    void setage(int val)
    {
        age=val;
    }
    int getage()
    {
        return age;
    };
protected:
    string ranks;
    string cores;
    float height;
    int age;

private:
};

#endif // OFFICER_H
