/****************************
**Name: Ryan Brown
**Date: 11/4/2015
**Description: Point class function
*******************************/


#include "Point.hpp"
#include <cmath>



double distancex, distancey;

Point::Point(double x, double y)
{
   setXcoord(x);
   setYcoord(y);
}

void Point::setXcoord(double x)
{  xcoord = x;}

void Point::setYcoord(double y)
{  ycoord = y;}

double Point::getXcoord()
 { return xcoord;}

double Point::getYcoord()
 {return ycoord;}

//distance formula

double Point::distanceTo(const Point &P2)
{
 distancex = xcoord - P2.xcoord;
 distancey = ycoord - P2.ycoord;
 return sqrt(distancex * distancex + distancey * distancey);
}
  



   
