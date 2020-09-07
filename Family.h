#ifndef FAMILY_H
#define FAMILY_H

#include <Visitor.h>
#include "place.h"

class Family : public Visitor
{
public:
    Family();
    int getMembers()
    {
        return members;
    }
    void setMembers(int val)
    {
        members=val;
    }
    void show_info();
    void ask_info();
protected:
    place quarter;
private:
    int members;
};

#endif // FAMILY_H
