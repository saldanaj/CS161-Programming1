/***********************************
**Name: Ryan Brown
**Date: 11/4/2015
**Description: LineSegment function
************************************/


#include "LineSegment.hpp"
#include <cmath>

LineSegment::LineSegment(Point p1, Point p2)
{
   setEnd1(p1);
   setEnd2(p2);
}


void LineSegment::setEnd1(Point e1)
   {end1 = e1;}

void LineSegment::setEnd2(Point e2)
   {end2 = e2;}

Point LineSegment::getEnd1()
   {return end1;}

Point LineSegment:getEnd2()
   {return end2;}

double LineSegment::length()
{
   return e1.distanceTo(e2);
}

double LineSegment::slope()
{
   return (e2.getYcoord() - e1.getYcoord()) / (p2.getXcoord() - p1.getXcoord());
}
double LineSegment::slope()

