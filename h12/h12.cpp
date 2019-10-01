/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    char ch;
    while(cin.peek() != EOF)
    {
        while(cin.get(ch))
        {
            if(ch == ' ' && cin.peek() == ' ')
            {
                continue;
            }
            else if(isdigit(cin.peek()))
            {
                cin.unget();
                cin.unget();
                cin.unget();
                break;
            }
            cout.put(ch);
        }
        cout << ", ";
        double total = 0.0;
        double num = 0.0;
        while(cin.get(ch))
        {
            if(isdigit(cin.peek()))
            {
                cin.unget();
                cin >> num;
                total += num;
            }
            if(ch == '\n')
            {
                break;
            }
        }
        cout << fixed << setprecision(2) << total << "\n";
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
