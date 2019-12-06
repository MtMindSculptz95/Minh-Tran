/**
    @file h35.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h35.h"

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker:: Worker(const string& NAME, double RATE)
{
    name = NAME;
    rate = RATE;
}

string Worker::getName() const { return name; }
double Worker::getRate() const { return rate; }

SalariedWorker::SalariedWorker(const string& NAME, double RATE) : Worker(NAME, RATE) {}
string SalariedWorker::payInfo(int hours)
{
    ostringstream out;
    out << name << "(Salaried, $ " << fixed << setprecision(2) << rate << ") worked " << hours << " hours. Pay: $ " << fixed << setprecision(2) << 40 * rate;

    return out.str();
}

HourlyWorker::HourlyWorker(const string& NAME, double RATE) : Worker(NAME, RATE) {}
string HourlyWorker::payInfo(int hours)
{
    double pay = 0;
    if(hours <= 40)
    {
        pay = hours * rate;
    }
    else if(hours > 40)
    {
        pay = 1017.50;
    }

    ostringstream out;
    out << name << "(Hourly, $ " << fixed << setprecision(2) << rate << ") worked " << hours << " hours. Pay: $ " << fixed << setprecision(2) << pay;

    return out.str();
}


/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
