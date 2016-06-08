//************************************************************************************************************** 
// FILE:        Lab10.cpp 
//
// DESCRIPTION: Contains the main() function. Instantiates a PointTest object which tests the Point class.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
// 
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//--------------------------------------------------------------------------------------------------------------
// TESTING:
//
// TEST CASE 1:
// ------------
// TEST CASE INPUT DATA:
// Point p2 x     =   22
// Point p2 y     =  -22
// Point p3 x     =   33
// Point p3 y     =  -33
// Point p3 red   =   50
// Point p3 green =  100
// Point p3 blue  =  200
// Point p4 x     =  -44
// Point p4 y     =   44
// Point p4 red   =  255
// Point p4 green =  127
// Point p4 blue  =    0
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// The point p1 is (x, y) = (0, 0) and color = (0, 0, 0)
// The point p2 is (x, y) = (22, -22) and color = (0, 0, 0)
// The point p3 is (x, y) = (33, -33) and color = (50, 100, 200)
// The point p4 is (x, y) = (-44, 44) and color = (255, 127, 0)
//
// OBSERVED OUTPUT:
// The point p1 is (x, y) = (0, 0) and color = (0, 0, 0)
// The point p2 is (x, y) = (22, -22) and color = (0, 0, 0)
// The point p3 is (x, y) = (33, -33) and color = (50, 100, 200)
// The point p4 is (x, y) = (-44, 44) and color = (255, 127, 0)
//
// TEST CASE RESULT: PASS
//
// TEST CASE 2:
// ------------
// TEST CASE INPUT DATA:
// Point p2 x     = 34
// Point p2 y     = 72
// Point p3 x     = -54
// Point p3 y     = 12
// Point p3 red   = 320
// Point p3 green = 119
// Point p3 blue  = 103
// Point p4 x     = 10
// Point p4 y     = -7
// Point p4 red   = 152
// Point p4 green = 195
// Point p4 blue  = 300
//
// EXPECTED OUTPUT GIVEN THE INPUT:
// The point p1 is (x, y) = (0, 0) and color = (0, 0, 0)
// The point p2 is (x, y) = (34, 72) and color = (0, 0, 0)
// The point p3 is (x, y) = (-54, 12) and color = (320, 119, 103)
// The point p4 is (x, y) = (10, -7) and color = (152, 195, 300)
//
// OBSERVED OUTPUT:
// The point p1 is (x, y) = (0, 0) and color = (0, 0, 0)
// The point p2 is (x, y) = (34, 72) and color = (0, 0, 0)
// The point p3 is (x, y) = (-54, 12) and color = (320, 119, 103)
// The point p4 is (x, y) = (10, -7) and color = (152, 195, 300)
//
// TEST CASE RESULT: PASS
//**************************************************************************************************************
#include "PointTest.hpp"

int main()
{
    PointTest pointTest;
    pointTest.run();
    return 0;
}
