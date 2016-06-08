//************************************************************************************************************** 
// FILE:        Color.hpp
//
// DESCRIPTION: Contains the class declaration for the Color class.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#ifndef COLOR_HPP
#define COLOR_HPP

#include <string>
using namespace std;

class Color
{
private:
    int mBlue;
    int mGreen;
    int mRed;
public:
    Color();
    Color(int pInitRed, int pInitGreen, int pInitBlue);
    int getBlue();
    int getGreen();
    int getRed();
    void setBlue(int pNewBlue);
    void setGreen(int pNewGreen);
    void setRed(int pNewRed);
    string toString();
    void init(int pInitRed, int pInitGreen, int pInitBlue);
};

#endif