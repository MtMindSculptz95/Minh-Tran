/**
    @file h34.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;

#include "h34.h"

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

///////// Add your code here ///////////////
Circle::Circle(double r, double x, double y) : Point( x, y )
{
    radius = r;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return PI * radius * radius;
}

double Circle::getCircumference() const
{
    return 2 + PI * radius;
}

std::string Circle::toString(int decimals) const
{
    ostringstream out;
    out << fixed << setprecision(decimals) << radius;
    return "Circle(radius=" + out.str() + ", center= " + Point::toString(decimals) + ")";
}

Cylinder::Cylinder(double h, double r, double x, double y) : Circle(r, x, y)
{

    height = h;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::getVolume() const
{
    return Circle::getArea() * Cylinder::getHeight();
}

double Cylinder::getArea() const
{
    return Circle::getCircumference() * Cylinder::getHeight() + 2 * Circle::getArea();
}

string Cylinder::toString(int decimals) const
{
    ostringstream out;
    out << fixed << setprecision(decimals) << height;
    return "Cylinder(height= " + out.str() + ", base = " + Circle::toString(decimals) + ")";

}



//////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}
