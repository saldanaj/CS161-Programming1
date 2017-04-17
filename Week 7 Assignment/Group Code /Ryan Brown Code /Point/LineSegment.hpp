/**********************************
**Name: Ryan Brown
**Date: 11/4/2015
**Description: Point header
*************************************/


#include "Point.hpp"
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP




Class LineSegment
{
private:
   Point end1;
   Point end2;

public:
   LineSegment(Point, Point);
   void setEnd1 (double);
   void setEnd2 (double);
   Point getEnd1();
   Point getEnd2();
   double slope();
   double length();
};
#endif



