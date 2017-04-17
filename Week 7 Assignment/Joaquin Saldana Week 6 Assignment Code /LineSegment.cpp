/*
 Author: Joaquin Saldana
 Date: 10/31/2015
 Description: the class is an abstraction of a line on a x and y plane.  It will take two points each containing an x and y coordinate to represent a line.
 */

#include "LineSegment.hpp"
#include <cmath>


/*
 Description: the constructor to the LineSegment class which takes two Point objects as parameter arguments 
 */
LineSegment::LineSegment(Point end1,Point end2)
{
    setEnd1(end1);
    setEnd2(end2);
    
}

/*
 Description: mutator methods that assigns the Point object to one of the two member variables
 */
void LineSegment::setEnd1(Point end1)
{
    point1 = end1;
    
}

/*
 Description: mutator methods that assigns the Point object to one of the two member variables
 */
void LineSegment::setEnd2(Point end2)
{
    point2 = end2;
    
}

/*
 Description: returns the Point object point1
 */
Point LineSegment::getEnd1()
{
    return point1;
    
}

/*
 Description: returns the Point object point2
 */
Point LineSegment::getEnd2()
{
    
    return point2;
    
}


/*
 Description: returns the distance of the two points utilizing the distanceTo access method in the Point class
 */
double LineSegment::length()
{
    return point1.distanceTo(point2); 
    
}


/*
 Description: returns the slope of the line using the rise/run formula
 */

double LineSegment::slope()
{
    double rise = point2.getYCoord() - point1.getYCoord();
    double run = point2.getXCoord() - point1.getXCoord();
    
    return rise/run;
    
}




