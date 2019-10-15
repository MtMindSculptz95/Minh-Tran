/**
 *  @author Minh Tran
 *  @date TT EVE
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here

void get(std::istream& in, Point& p)
{
    char ch;
    in >> p.x >> ch >> p.y;
}
void print(std::ostream& out, const Point& p)
{
    out << "(" << p.x  << ", " << p.y << ")";
}
double distanceBetween(const Point& a, const Point& b)
{
    double A = b.y - a.y;
    double B = b.x - a.x;
    double ans = pow(A,2) + pow(B,2);
    double result = sqrt(ans);
    return result;
}
Point midpoint(const Point& a, const Point& b)
{
    int mid1 = (a.x + b.x)/ 2;
    int mid2 = (a.y + b.y)/ 2;
    return Point{mid1, mid2};
}
double perimeter(const Triangle& t)
{
    double line1 = sqrt(pow((t.p1.x-t.p2.x),2) + pow((t.p1.y-t.p2.y),2));
    double line2 = sqrt(pow((t.p1.x-t.p3.x),2) + pow((t.p1.y-t.p3.y),2));
    double line3 = sqrt(pow((t.p3.x-t.p2.x),2) + pow((t.p3.y-t.p2.y),2));
    double result = line1 + line2 + line3;
    return result;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    cout << "Enter a point as (x, y): ";
    Point p;
    get(cin, p);
    cout << "You entered ";
    print(cout, p);
    cout << endl;

    return 0;
}