//************************************************************************************************************** 
// FILE:        PointTest.cpp
//
// DESCRIPTION: Implementation of the PointTest class. See PointTest.hpp for more info.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include <iomanip>
#include <iostream>
#include "Color.hpp"
#include "Point.hpp"
#include "PointTest.hpp"

using namespace std;

int getInt(string pPrompt)
{
    int n;
    cout << pPrompt;
    cin >> n;
    return n;
}

PointTest::PointTest()
{
}

void PointTest::run()
{
    int x, y, r, g, b;
    cout << fixed << setprecision(3);
    
    Point p1;
    
    x = getInt("Enter point p2 x? ");
    y = getInt("Enter point p2 y? ");
    Point p2(x, y);
    
    x = getInt("Enter point p3 x? ");
    y = getInt("Enter point p3 y? ");
    r = getInt("Enter point p3 red? ");
    g = getInt("Enter point p3 green? ");
    b = getInt("Enter point p3 blue? ");
    Point p3(x, y, r, g, b);
    
    x = getInt("Enter point p4 x? ");
    y = getInt("Enter point p4 y? ");
    r = getInt("Enter point p4 red? ");
    g = getInt("Enter point p4 green? ");
    b = getInt("Enter point p4 blue? ");
    Color color(r, g, b);
    Point p4(x, y, color);
    
    cout << "The point p1 is " << p1.toString() << endl;
    cout << "The point p2 is " << p2.toString() << endl;
    cout << "The point p3 is " << p3.toString() << endl;
    cout << "The point p4 is " << p4.toString() << endl;
}