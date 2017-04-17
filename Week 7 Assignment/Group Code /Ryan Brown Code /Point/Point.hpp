/*********************************
**Name: Ryan Brown
**Date: 11/4/2015
**Description: Point class header
*********************************/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
 private:
   double xcoord;
   double ycoord;

 public:

   Point(double x = 0.0, double y = 0.0)
   void setXcoord(double);
   void setYcoord(double);
   double getXcoord();
   double getYcoord();
   double distanceTo(const Point&); 

};

#endif
