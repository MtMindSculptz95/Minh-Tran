/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h22.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID


#include "h22.h"

void flip(UC* const img, int width, int height, Direction dir)
{
    // Add your code here
    if(dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for(int row = 0; row < height - 1; row++)
        {
            Pixel * front = reinterpret_cast<Pixel *> (img) + row * width;
            Pixel * back = front + width - 1;
            while(front < back)
            {
                auto temp = *front;
                *front = *back;
                *back = temp;
                front++;
                back--;
            }
        }
    }
    if(dir == Direction::TtoB || dir == Direction::BtoT)
    {
        for(int col = 0; col < width; col++)
        {
            Pixel *top = reinterpret_cast<Pixel *> (img) + col;
            Pixel *bottom = top + width * (height - 1);
            while(top < bottom)
            {
                auto temp = *top;
                *top = *bottom;
                *bottom = temp;
                top += width;
                bottom -= width;
            }
        }
    }
}

void mirror(UC* const img, int width, int height, Direction dir)
{
    // Add your code here
    for(int row = 0; row < height-1; row++)
        {
        Pixel * front = reinterpret_cast<Pixel *> (img) + row * width;
        Pixel * back = front + width - 1;
            while(front < back)
            {
               if(dir == Direction::LtoR)
               {
                   *back = *front;
               }
               if(dir == Direction::RtoL)
               {
                   *front = *back;
               }
               front++;
               back--;
            }
        }

        for(int col = 0; col < width; col++)
        {
            Pixel *top = reinterpret_cast<Pixel *> (img) + col;
            auto *bottom = top + width * (height -1);
            while(top < bottom)
            {
                if(dir == Direction::BtoT)
               {
                   *top = *bottom;
               }
               if(dir == Direction::TtoB)
               {
                   *bottom = *top;
               }
               top += width;
               bottom -= width;
            }
        }
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}