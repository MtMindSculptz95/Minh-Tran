/**
 *  @author minh tran
 *  @date TT EVE
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h13.h"

// Define your function here
string dataSets(const string& fileName)
{
    ostringstream result;
    ifstream in(fileName);
    if(in.fail()) result << "data/notfound.txt cannot be opened.";

    int n;
    int data_set = 1;

    while(in >> n)
    {
        double sum = 0.0;
        int count = 0;
        while(n != 0)
        {
            count += n;
            double value;
            in >> value;
            sum += n * value;
            in >> n;
        }

        if(data_set > 1) result << "\n";
        result << fixed << setprecision(4);
        result << "data set " << data_set << ": total values = " << count << "\naverage value = " << sum / static_cast<double>(count) << endl;
        data_set++;
    }
    return result.str();
}

///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}