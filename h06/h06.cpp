/**
 *  @author Minh Tran
 *  @date Fall 2019 TTEVE
 *  @file h06.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mtran362";  // Add your Canvas login name

// Implement your function here
string toFrenchGender(const string& country)
{
   string prefix;
    string vowels = "UEOAI";
    string islands = "iles";
    string backExem = "es, is, os, as";
    string result = "who knows?";
    size_t len = country.size();
    string last = country.substr(len - 2,2);
    string masculine = "Belize, Cambodge, Honduras, Mexique, Mozambique, Costa Rice, Zimbabwe";
    string plain = "Israel, Madagascar, Sri Lanka, Singapore, Monaco, Cuba and Cyprus";

    auto notFound = string::npos;

    if(masculine.find(country) != notFound)
    {
        prefix = "le ";
    }
    else if(backExem.find(last) != notFound || country.substr(0, 4) == islands)
    {
        prefix = "les ";
    }
    else if(plain.find(country) != notFound)
    {
        prefix = "";
    }
    else if(vowels.find(country.front()) != notFound)
    {
        prefix = "l'";
    }
    else if(country.back() == 'e' || country.back() == 'o')
    {
        prefix = "la ";
    }
    else
    {
        prefix = "le ";
    }

    result = prefix + country;
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
