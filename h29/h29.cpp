/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h29.cpp
 */
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

string STUDENT = "mtran362"; // Add your Canvas/occ-email ID
#include "h29.h"

Pixel GRAY{128, 128, 128, 128}; // a global gray for stubbing

// Add your code here
Image::Image(unsigned width, unsigned height)
{
    width_ = width;
    height_ = height;
    pixels_ = vector<Pixel>(width * height);
}
Image::Image(const string& path)
{
   load(path);
}

 unsigned Image::width() const{
     return width_;
 }
unsigned Image::height() const{
     return  height_;
}
unsigned Image::size() const{
    return pixels_.size();
}
void Image::fill(const Pixel& color)
{
     for(size_t i = 0 ; i < pixels_.size() ; i++)
     {
         pixels_[i] = color;
     }
}
Pixel& Image::at(unsigned pos){
    return pixels_.at(pos);
}
Pixel& Image::at(unsigned x, unsigned y){
    return pixels_.at(width_ * y + x);
}
bool Image::load(const std::string& path)
{
    int width , height , bpp , channels = 4;
    unsigned char * temp = stbi_load(path.c_str() , &width , &height , &bpp , channels );
    if(temp != nullptr)
    {
        width_ = width;
        height_ = height;
        Pixel *p = reinterpret_cast<Pixel*>(temp);
        pixels_.resize(width * height);
        stbi_image_free(temp);
        return true;
    }
    return false;
}
bool Image::save(const std::string& path)
{
 size_t dot = path.rfind(".");
 string ex = path.substr(dot + 1);
 if(dot == string::npos) return false;
 for(auto &e : ex) e = tolower(e);
  if(ex == "png")
 {
  stbi_write_png(path.c_str() , width_ , height_ , 4 , reinterpret_cast<unsigned char*>(pixels_.data()) , 4 * width_ );
  return true;
 }
  else if(ex == "jpg")
 {
  stbi_write_jpg(path.c_str() , width_ , height_ , 4 , reinterpret_cast<unsigned char*>(pixels_.data()) , 100 );
  return true;
 }
  else if(ex == "bmp")
 {
  stbi_write_bmp(path.c_str() , width_ , height_ , 4 , reinterpret_cast<unsigned char*>(pixels_.data()));
  return true;
 }
 return false;
}

//////////////////////// STUDENT TESTING //////////////////////////
void info(const string& msg, const Image& img);
int run()
{
    // Uncomment the following code when doing make run
    cout << "Part 1: construct three images" << endl;
    // Image empty;                    // empty image
    // Image square(20, 20);           // square image
    // Image lego("images/lego.png");  //  from file
    // cout << " -- Success" << endl;

    cout << "\nPart 2: print size, width, height" << endl;
    // info("empty", empty);
    // info("square", square);
    // info("lego", lego);

    cout << "\nPart 3: Modify some images" << endl;
    // bool ok = empty.load("images/paris.jpg");
    // string msg = "Loading paris into empty image. ";
    // msg += ok ? "Success." : "Failed.";
    // cout << msg << endl;
    // info("empty", empty);

    // Pixel fillColor{255, 127};
    // square.fill(fillColor);

    cout << "\nPart 4: loop through an image in two ways." << endl;
    // for (auto i = empty.size(), len = i; i > len / 2; i--)
    // {
    //     auto temp = empty.at(i - 1);
    //     empty.at(i - 1) = empty.at(len - i);
    //     empty.at(len - i) = temp;
    // }
    // auto pix = empty.at(20, 10);  // x = 20, y = 10
    // for (auto y = square.height(); y > 0; y--)
    //     for (auto x = square.width(); x > 0; x--)
    //         if (y == 10  || x == 10 || x == 1 || x == 20)
    //             square.at(x - 1, y - 1) = pix;

    cout << "\nPart 5: Save all the pictures." << endl;
    // cout << "Saving paris.png: " << ((empty.save("actual/paris.png"))
    //     ? "Success" : "Failure") << endl;
    // cout << "Saving square.png: " << ((square.save("actual/square.png"))
    //     ? "Success" : "Failure") << endl;
    // cout << "Saving lego.jpg: "  << ((lego.save("actual/lego.jpg"))
    //     ? "Success" : "Failure") << endl;

    return 0;
}
// Helper function
void info(const string& msg, const Image& img)
{
    cout << msg << ": size()->" << img.size()
        << ", width()->" << img.width()
        << ", height()->" << img.height() << endl;
}
