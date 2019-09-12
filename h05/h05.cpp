/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h05.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h05.h"

// Place the implementation (definition) of your function here
double focalLength(double d, double r1, double r2, double n)
{
    double result;
    double x = (1 / r1) - (1 / r2);
    double y = (n - 1) * d;
    double z = y / (n * r1 * r2);

    result = (n-1) * (x + z);

    return result;
}