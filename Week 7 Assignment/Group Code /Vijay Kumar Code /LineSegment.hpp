/*********************************
 ** Author: Vijay Kumar
 ** Assignment: Week 6
 ** Date: 11/2/15
 ***********************************/


#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
private:
    Point endPoint1;
    Point endPoint2;
    
public:
    LineSegment(Point, Point);
    Point getEnd1();
    Point getEnd2();
    void setEnd1(Point);
    void setEnd2(Point);
    double length();
    double slope();
    
};
#endif

