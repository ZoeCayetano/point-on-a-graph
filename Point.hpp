//************************************************************************************************************** 
// FILE:        Point.hpp
//
// DESCRIPTION: Declares a class to represent a point in the Cartesian plane. A point is represented by an
//              (x, y) coordinate, where both x and y are integers.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include "Color.hpp"

using namespace std;

class Point {
public:
    Point();
    Point(int pInitX, int pInitY);
    Point(int pInitX, int pInitY, int pInitRed, int pInitGreen, int pInitBlue);
    Point(int pInitX, int pInitY, Color& pInitColor);
    double distance(Point& pAnotherPoint);
    Color getColor();
    int getX();
    int getY();
    void move(int pNewX, int pNewY);
    void setColor(Color& pNewColor);
    void setX(int pNewX);
    void setY(int pNewY);
    string toString();
private:
    void init(int pInitX, int pInitY);
    void init(int pInitX, int pInitY, int pInitRed, int pInitGreen, int pInitBlue);
    void init(int pInitX, int pInitY, Color& pInitColor);
    Color mColor;
    int mX;
    int mY;
};

#endif