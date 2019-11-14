/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement the Bug class member functions here
Bug::Bug(int startPos)
{
    position_ = startPos;
    direction_ = 1;
}
void Bug::move()
{
    if(direction_ == 1) position_++;
    else if(direction_ == 0) position_--;
}
void Bug::turn()
{
    if(direction_ == 0)
    {
        direction_ = 1;
    }
    else if(direction_ == 1)
    {
        direction_ = 1;
    }
}
int Bug::position() const
{
    return position_;
}


// Implement the Employee class member functions here
Employee::Employee()
{
    salary_ = 0;
}
Employee::Employee(const string& name, double salary)
{
    salary_ = salary;
    Person data = {name, data_.age()};
    data_ = data;
}
void Employee::salary(double newSalary)
{
    salary_ = newSalary;
}
double Employee::salary() const
{
    return salary_;
}
string Employee::name() const
{
    return data_.name();
}


//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    // Bug fred(3);
    // fred.move();
    // cout << "fred is now at " << fred.position() << endl;

    return 0;
}