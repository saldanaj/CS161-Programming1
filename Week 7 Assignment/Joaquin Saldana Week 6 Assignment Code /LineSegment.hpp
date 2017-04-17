/*
 Author: Joaquin Saldana
 Date: 10/31/2015
 Description: the class is an abstraction of a line on a x and y plane.  It will take two points each containing an x and y coordinate to represent a line.  
 */


#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
    private:
        Point point1, point2;  //member variables which are two points
    
    public:
        LineSegment(Point end1, Point end2); // constructor
        void setEnd1(Point);  // mutator methods
        void setEnd2(Point);
        Point getEnd1();      // accessor methods
        Point getEnd2();
        double length();      // returns the distance of the 2 end points
        double slope();       // returns the slope degree of the line with the rise/run formula 
    
};

#endif
