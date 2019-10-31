/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mtran362";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    << "that may kill the person at and under the desired weight." << endl;
    cout << endl;

    cout << "Weight of a mouse in grams: ";
    int mouseWeight;
    cin >> mouseWeight;

    cout << "Lethal dose the mouse (in grams): ";
    double lethalDoseOfMouse;
    cin >> lethalDoseOfMouse;

    cout << "Desired weight of the dieter (in pounds): ";
    int desiredWeight;
    cin >> desiredWeight;

    const double artificialSweetenerPercentage = 0.001;
    const int oneDietSodaWeight = 350;
    const double onePound = 454.0;
    double lethalDoseOfDieter = ((desiredWeight * onePound * lethalDoseOfMouse) / mouseWeight);
    int lethalDoseInCans = round(lethalDoseOfDieter / (artificialSweetenerPercentage * oneDietSodaWeight));
    cout << endl;

    cout << fixed << setprecision(0) << "Lethal dose in grams, cans is [" << lethalDoseOfDieter << "," << lethalDoseInCans << "]" << endl;

    return 0;
}
