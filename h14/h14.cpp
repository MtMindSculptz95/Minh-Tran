/**
 *  @author minh tran
 *  @date TT EVE
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine (const string& prompt)
{
    string result;
    getline(cin,result);

    if(prompt.empty())
    {
        cout << prompt;
    }
    else if (! isspace(prompt.back()))
    {
        cout << prompt + ' ';
    }
    else if( isspace(prompt.back()))
    {
        cout << prompt;
    }
    return result;
}

int getInt(const string& prompt)
{
    int result;
    string line = getLine(prompt);

    while(true)
    {
        if(! line.empty())
        {
            istringstream in(line);
            int n;
            in >> n;
            if( in.eof()&& !in.fail())
            {
                return n;
            }
            in >> ws;
            if(in.eof() && !in.fail())
            {
                return n;
            }
        }
        cerr << line;
        line.clear();
        line = getLine(prompt);
    }
    return result;

}

double getReal (const string& prompt)
{
    double result;
    string line = getLine(prompt);

    while(true)
    {
        if(! line.empty())
        {
            istringstream in(line);
            double n;
            in >> n;

            if( in.eof()&& !in.fail())
            {
                return n;
            }
            in >> ws;

            if(in.eof() && !in.fail())
            {
                return n;
            }
        }
        cerr << line;
        line.clear();
        line = getLine(prompt);
    }
    return result;
}
bool getYN (const string& prompt)
{
    string line = getLine(prompt);

    while (true)
    {
        if(! line.empty())
        {
        istringstream in(line);
        string st;
        in >> st;
        in >> ws;
        char ch = st.at(0);

        if ((ch == 'Y' || ch == 'y' || ch == 'N' || ch == 'n'))
            {
                cerr << st;
                st.clear();
                in >> st;
            }

            if (ch == 'Y' || ch == 'y')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        cerr << "ERROR: Failed!" << endl;
        line.clear();
        line = getLine(prompt);
    }
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    do
    {
        string s = getLine("Enter a string: ");
        cout << "s->\"" << s << "\"" << endl;

        int n = getInt("Enter an integer:");
        cout << "n->" << n << endl;

        double d = getReal("Enter a real number: ");
        cout << "d->" << d << endl;

    } while (getYN("Try again? (Y/N)"));

    return 0;
}