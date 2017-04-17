/*********************************
 ** Author: Vijay Kumar
 ** Assignment: Week 6
 ** Date: 11/2/15
 ***********************************/

#include "LineSegment.hpp"


LineSegment::LineSegment(Point p1, Point p2)
{
    setEnd1(p1);
    setEnd2(p2);
}

void LineSegment::setEnd1(Point p1)
{
    endPoint1 = p1;
}

void LineSegment::setEnd2(Point p2)
{
    endPoint2 = p2;
}

Point LineSegment::getEnd1()
{
    return endPoint1;
}

Point LineSegment::getEnd2()
{
    return endPoint2;
}

double LineSegment::length()
{
    return endPoint1.distanceTo(endPoint2);
}

double LineSegment::slope()
{
    double slope = (endPoint1.getYCoord()-endPoint2.getYCoord())/(endPoint1.getXCoord()-endPoint2.getXCoord());
    return slope;
}

