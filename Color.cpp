//************************************************************************************************************** 
// FILE:        Color.cpp
//
// DESCRIPTION: Contains the class implementation for the Color class. See Color.hpp for the class declaration.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include <sstream>
#include "Color.hpp"

Color::Color()
{
    init(0,0,0);
}

Color::Color(int pInitRed, int pInitGreen, int pInitBlue)
{
    init(pInitRed, pInitGreen, pInitBlue);
}

int Color::getBlue()
{
    return mBlue;
}

int Color::getGreen()
{
    return mGreen;
}

int Color::getRed()
{
    return mRed;
}

void Color::init(int pInitRed, int pInitGreen, int pInitBlue)
{
    setRed(pInitRed);
    setGreen(pInitGreen);
    setBlue(pInitBlue);
}

void Color::setBlue(int pNewBlue)
{
    mBlue = pNewBlue;
}

void Color::setGreen(int pNewGreen)
{
    mGreen = pNewGreen;
}

void Color::setRed(int pNewRed)
{
    mRed = pNewRed;
}

string Color::toString()
{
    stringstream sout;
    sout << "(" << getRed() << ", " << getGreen() << ", " << getBlue() << ")";
    return sout.str();
}