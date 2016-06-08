//************************************************************************************************************** 
// FILE:        Point.cpp
//
// DESCRIPTION: Implementation of the Point class. See Point.hpp for the class declaration.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include <cmath>              
#include <sstream>
#include "Point.hpp"

Point::Point()
{
    init(0, 0, 0, 0, 0);
}

Point::Point(int pInitX, int pInitY)
{
    init(pInitX, pInitY, 0, 0, 0);
}

Point::Point(int pInitX, int pInitY, int pInitRed, int pInitGreen, int pInitBlue)
{
    init(pInitX, pInitY, pInitRed, pInitGreen, pInitBlue);
}

Point::Point(int pInitX, int pInitY, Color& pInitColor)
{
    init(pInitX, pInitY, pInitColor);
}

double Point::distance(Point& pAnotherPoint)
{
    double deltaX = getX() - pAnotherPoint.getX();
    double deltaY = getY() - pAnotherPoint.getY();
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

Color Point::getColor()
{
    return mColor;
}

int Point::getX()
{
    return mX;
}

int Point::getY()
{
    return mY;
}

void Point::init(int pInitX, int pInitY)
{
    setX(pInitX);
    setY(pInitY);
}

void Point::init(int pInitX, int pInitY, int pInitRed, int pInitGreen, int pInitBlue)
{
    Color initColor(pInitRed, pInitGreen, pInitBlue);
    init(pInitX, pInitY, initColor);
}

void Point::init(int pInitX, int pInitY, Color& pInitColor)
{
    setX(pInitX);
    setY(pInitY);
    setColor(pInitColor);
}

void Point::move(int pNewX, int pNewY)
{
    init(pNewX, pNewY);
}

void Point::setColor(Color& pNewColor)
{
    mColor = pNewColor;
}

void Point::setX(int pNewX)
{
    mX = pNewX;
}

void Point::setY(int pNewY)
{
    mY = pNewY;
}

string Point::toString()
{
    stringstream sout;
    sout << "(x, y) = (" << getX() << ", " << getY() << ") ";
    sout << "and color = " << getColor().toString();
    return sout.str();
}
