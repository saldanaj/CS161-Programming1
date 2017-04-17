/*********************************
 ** Author: Vijay Kumar
 ** Assignment: Week 6
 ** Date: 11/2/15
 ***********************************/

#include "Point.hpp"
#include <cmath>


Point::Point (double x, double y)
{
    setXCoord(x);
    setYCoord(y);
}

Point::Point ()
{
    xCoord = 0;
    yCoord = 0;
}


double Point::getXCoord()
{
    
    return xCoord;
}

double Point::getYCoord()
{
    return yCoord;
}

void Point::setXCoord(double x)
{
    xCoord = x;
}


void Point::setYCoord(double y)
{
    yCoord = y;
}


double Point::distanceTo(const Point &distance)
{
  	 double length = distance.xCoord - xCoord;
         double height = distance.yCoord - yCoord;
         double total = sqrt(length*length + height*height);
                        
         return total;
}
   
