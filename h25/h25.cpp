/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h15.cpp
 */
#include <string>
#include <stdexcept>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
bool sameSet(const int *aBeg,const int *aEnd,const int *bBeg,const int *bEnd)
{
   bool ret=false;
   bool chek=false;

   // array a
   for(const int *p=aBeg;*p!=*aEnd;p++){
       chek=false;
       // array b
       for(const int *q=bBeg;*q!=*bEnd;q++){

           // is if element found
           if(*q==*p){
               chek=true;
               break;
           }
       }

       // if element not found
       if(chek==false)   {
           ret=false;
           break;
       }
       else{
           ret=true;
       }
   }

   ret=false;
   chek=false;
   for(const int *p1=bBeg;*p1!=*bEnd;p1++){
       chek=false;
       for(const int *q1=aBeg;*q1!=*aEnd;q1++){
           if(*q1==*p1){
               chek=true;
           break;
           }
       }
       if(chek==false)   {
           ret=false;
           break;
       }
       else{
           ret=true;
       }
   }


   return(ret);
}
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{

   if(bSize<aSize)
   {
       throw length_error("Size is Lower than source size");
   }
   else
   {
       bSize=0;

       for(size_t i=0;i<aSize;i++)
       {

           // if even add in b
           if(a[i]%2==0)
           {

               b[bSize]=a[i];
               bSize++;
           }
       }
   }
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}