/*
 Author: Joaquin Saldana
 Date: 10/31/2015
 Description: a cpp file which defines the Point class functions and assign the member variables.  The class itself is an abstraction of coordinates on a x and y axis with four quadrants.
 */


#include <cmath>
#include "Point.hpp"


/*
 Description: default constructor
 */
Point::Point()
{
    xPoint = 0;
    yPoint = 0;
}

//------------------------------------------

/*
 Description:second constructor that takes two double parameters and assigns them to the member functions wit the class set method
 */
Point::Point(double x, double y)
{
    setXCoord(x);
    setYCoord(y);
}

//------------------------------------------

/*
 Description: set method for the x coordinate
 */
void Point::setXCoord(double x)
{
    xPoint = x;
}

//------------------------------------------

/*
 Description: set method for the y coordinate
 */
void Point::setYCoord(double y)
{
    yPoint = y;
}

//------------------------------------------

/*
 Description: accessor method for the x coordinate
 */
double Point::getXCoord()
{
    return xPoint;
}

//------------------------------------------

/*
 Description: accessor method for the y coordinate
 */
double Point::getYCoord()
{
    return yPoint;
}

//------------------------------------------

/*
 Description:returns the distance between 2 points by doing utilizing the distance formula derived from the Pythagorean theorem  c^2 = a^2 + b^2 
 */
double Point::distanceTo(const Point &p2)
{
    double xCoordinateSummation = pow((p2.xPoint - xPoint), 2);
    double yCoordinateSummation = pow((p2.yPoint - yPoint), 2);
    
    return sqrt(xCoordinateSummation + yCoordinateSummation);
}