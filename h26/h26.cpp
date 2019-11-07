/**
 *  @author Minh Tran
 *  @date TT EVE
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h26.h"

// Add your code here
void reverse(char * s) {
   char temp;
   char *last = s;
   while(*last) {
       last++;
   }
   last--;
   char *first = s;
   while(first < last) {
       temp = *first;
       *first = *last;
       *last = temp;
       first++;
       last--;
   }
}
const char * findStr(const char *str1, const char *str2)
{
    if(*str2 == '\0')
    {
        return str1;
    }
    auto start1 = str1;
    auto end1 = str1;
    size_t len1 = end1 - start1 - 1;
    for(size_t i = 0; i < len1; i++)
    {
        auto p = str1 + i;
        auto p1 = str1 + i;
        auto p2 = str2;
        while(*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
        {
            p1++;
            p2++;
        }
        if(*p2 == '\0')
        {
            return p;
            break;
        }
        if(*p1 == '\0')
        {
            return nullptr;
            break;
        }
    }
    return nullptr;
}

//////////////////////// STUDENT TESTING //////////////////////////
int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}