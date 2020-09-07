#ifndef STUDENT_H
#define STUDENT_H

#include <Visitor.h>


class Student : public Visitor
{
public:
    Student();
    void show_info();
    void ask_info();

    void setstudy_level(string val) {study_level=val;}
    string getstudy_level(){return study_level;}
    void setcgpa(float val){cgpa=val;}
    float getcgpa(){return cgpa;}

protected:

private:
    string study_level;
    float cgpa;
};

#endif // STUDENT_H
