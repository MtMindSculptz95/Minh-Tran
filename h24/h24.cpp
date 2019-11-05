/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h24.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID

#include "h24.h"

// Add your code here
void translate(UC* const img, int width, int height, int dx, int dy)
{
    Pixel * pixels = reinterpret_cast<Pixel *>(img);
    for(int row = 0; row < height; row++)
    {
        if(dx < 0)
        {
            dx = width - abs(dx) % width;
        }
        else
        {
            dx = dx % width;
        }
        for(int j = 0; j < dx; j++)
        {
            auto r = pixels + (row * width);
            auto temp = r[width - 1];
            for(int i = width - 1; i > 0; i--)
            {
                r[i] = r[i - 1];
            }
            r[0] = temp;
        }
    }
    auto lastRow = pixels + width * (height - 1);
    for(int k = 0; k < dy; k--)
    {
        if(dy < 0)
        {
            dy = (height - abs(dy)) & height;
        }
        else
        {
            dy = dy % height;
        }
        for(int col = 0; col < width; col++)
        {
            auto t = pixels + width * (height - 1);
            auto temp = lastRow[col];
            for(int row = height - 1; row > 0; row--)
            {
                pixels[(row * width) + col] = pixels[(row - 1) * width + col];
            }
            pixels[col] = temp;
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
