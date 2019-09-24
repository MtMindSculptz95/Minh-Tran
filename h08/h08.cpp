/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h08.h"

// Place your function definitions in this file.
string zipZap(const string& s)
{
    string result;
    size_t len = s.length();
    size_t i = 0;
    if(len < 3)
    {
        result += s;
    }
    else
    {
        while(i < len - 2)
        {
            string s1 = s.substr(i, 3);
            if(s1.front() == 'z' && s1.back() == 'p')
            {
                result += "zp";
                i += 3;
            }
            else
            {
                result += s[i];
                i++;
            }
        }
        if(s.at(s.length() - 1) == 'p' && s.at(s.length() - 3) == 'z')
        {
            result = result;
        }
        else
        {
            result += s.substr(len - 2, 2);
        }
    }
    return result;
}
int countCode(const string& s)
{
    int result = 0;
    if(s.length() <= 3)
    {
        result = 0;
    }
    else
    {
        for(size_t i = 0; i <= s.length() - 4; i++)
        {
            string word = s.substr(i, 4);
            if(word.front() == 'c' && word[1] == 'o' && word.back() == 'e')
            {
                result += 1;
            }
        }
    }
    return result;
}
string everyNth(const string& s, int n)
{
    string result;
    if(n < 1)
    {
        result = "";
    }
    else
    {
        for(size_t i = 0, len = s.length(); i < len; i += n)
        {
            result += s[i];
        }
    }
    return result;
}
bool prefixAgain(const string& s, int n)
{
    bool result;
    string prefix = s.substr(0, n);
    if(s == "")
    {
        result = "False";
    }
    else
    {
        for(size_t i = n, len = s.length(); i <= (len - n); i++)
        {
            string word = s.substr(i, n);
            if(word == prefix)
            {
                result = "TRUE";
            }
        }
    }
    return result;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    return 0;
}