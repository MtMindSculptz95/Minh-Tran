/**
    @file 32.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h32.h"

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

// Add your implementation here
string stringClean(const string& s)
{
    if (s.length() < 2) return s;

    if (s[0] == s[1])
    return stringClean(s.substr(1));
    else
    return s[0] + stringClean(s.substr(1));
}
////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

