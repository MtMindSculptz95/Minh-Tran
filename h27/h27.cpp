/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h27.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h27.h"

// Add your code here
FlexArray& readData(istream& in, FlexArray& a)
{
    size_t capacity = INITIAL_CAPACITY;
    a.data_ = unique_ptr<int[]> (new int[capacity]);
    int read = 0;
    size_t count = 0;
    while(in >> read && capacity > count && !in.fail())
    {
        a.data_[count++] = read;
        a.size_++;
        if(a.size_ == capacity)
        {
            unique_ptr<int[]> b;
            b.reset(a.data_.release());
            a.data_ = unique_ptr<int[]>(new int[capacity *= 2]);
            for(size_t i = 0; i != a.size_; i++)
            {
                a.data_[i] = b[i];
            }
        }
    }
    unique_ptr<int[]> b;
    b.reset(a.data_.release());
    a.data_ = unique_ptr<int[]>(new int[a.size_]);
    for(size_t k = 0; k != a.size_; k++)
    a.data_[k] = b[k];
    return a;
}

string toString(const FlexArray& a)
{
    string result = "{";
    if(a.size_ > 0)
    {
        result += to_string(a.data_[0]);
    }
    for(size_t i = 1; i < a.size_; i++)
    {
        result += ", " + to_string(a.data_[i]);
    }
    return result + "}";
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}