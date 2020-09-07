#ifndef VISITOR_H
#define VISITOR_H

#include <Person.h>

using namespace std;
class Visitor : public Person
{
public:
    Visitor();
    void show_info();
    void ask_info();
protected:
    //visiting_time using system time
    //exit time again in system time
    Person person_of_interest;

private:
    string purpose_of_visit;
};

#endif // VISITOR_H
