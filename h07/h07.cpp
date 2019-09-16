/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h07.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "mtran362";  // Add your Canvas login name

// Implement your function here
int sumNums (const string& str)
{
    int num = 0;
    int sum = 0;

    for (size_t i = 0, len = str.size(); i < len; i++)
    {
        if (isdigit(str.at(i)))
        {
            int d = str.at(i) - '0';
            num *= 10;
            num += d;
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}


/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}


