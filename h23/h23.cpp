/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
MinMax minMax(const double *ptr, size_t size)
{
    struct MinMax result;
    result.min = ptr;
    result.max = ptr;

    auto atEnd = ptr + (size - 1);

    while(ptr < atEnd)
    {
        ptr++;

        if(*ptr > *(result.max))
        {
            result.max = ptr;
        }
        if(*ptr < *(result.min))
        {
            result.min = ptr;
        }
    }
    return result;
}
int alternatingSum(const int a[], size_t size)
{
    int sum = 0;
    //int iArray[5];
    for(size_t i = 0; i < size; i++)
    {
        if(i % 2 == 0)
        {
            sum += a[0];
        }
        else if(i % 2 != 0)
        {
            sum += a[0];
        }
    }
    return sum;
}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}