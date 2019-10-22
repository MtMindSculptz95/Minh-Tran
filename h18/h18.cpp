/**
 *  @author Minh Tran
 *  @date   TTEVE
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID


#include "h18.h"

// Place your function definition here
vector<string> fileToWords(const string& filename)
{
    vector<string> result;
    ifstream in(filename);

    if(in.fail())
    {
        throw invalid_argument("invalid file name.");
    }
    while(!in.eof())
    {
        string word;
        while(in >> word)
        {
            result.push_back(word);
        }
    }
    return result;
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    auto v = fileToWords("excluded.txt");
    cout << "Excluded words:" << endl;
    for (auto e : v) cout << " -" << e << endl;
    return 0;
}