/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID


#include "h19.h"

// Place your function here
vector<WORD> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
{
    vector<WORD> results;
    string word;

    long long position;
    while(in)
    {
        bool found = false;
        string tem;
        position = static_cast<long long >(in.tellg());

        if(position == 1)
        {
            break;
        }
        in >> word >> ws;
        for(char c : word)
        {
            if(! ispunct(c))
            {
                tem += tolower(c);
            }
        }
        word = tem;

        for(WORD& x:results)
        {
            if(x.word == word)
            {
                x.positions.push_back(position);
                found = true;
            }
        }

        if(found)
        {
            continue;
        }
        else if(!found)
        {
            for(auto excl : excluded)
            {
                if(excl == word)
                {
                    found = true;
                }
            }
        }

        if(found)
        {
            continue;
        }
        else if(!found)
        {
            for(auto dict : dictionary)
            {
                if(dict == word)
                {
                    found = true;
                }
            }
        }

        if(found)
        {
            continue;
        }
        else if(!found)
        {
            WORD temp;
            temp.word = word;
            temp.positions.push_back(position);
            results.push_back(temp);
        }
    }
    return results;
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}