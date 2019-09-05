/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mtran362?";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    cout << "  Time: ";
    int timeHours;
    cin >> timeHours;
    cin.get();
    int timeMinutes;
    cin >> timeMinutes;

    cout << "  Duration: ";
    int durationHours;
    cin >> durationHours;
    cin.get();
    int durationMinutes;
    cin >> durationMinutes;

    int time = (timeHours + 24) * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;
    int after = time + duration;
    int before = time - duration;
    int afterHours = after / 60;
    int afterMinutes = after % 60;
    int beforeHours = before / 60;
    int beforeMinutes = before % 60;
    cout << endl;

    cout << timeHours << ":" << timeMinutes << " hours after, and  before,"
    << durationHours << ":" << durationMinutes << " is[";
    cout << setfill('0');
    cout << (afterHours - 1) % 12 + 1 << ":" << setw(2) << afterMinutes;
    cout << ", " << (beforeHours - 1) % 12 + 1 << ":" << setw(2) << beforeMinutes << "]" << endl;
    return 0;
}
