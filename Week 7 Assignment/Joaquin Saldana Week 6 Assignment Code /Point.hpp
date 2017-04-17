/*
 Author: Joaquin Saldana
 Date: 10/31/2015
 Description: a header file which declares the Point class which is an abstraction of coordinates on a x and y axis with four quadrants.
 */

#include <cmath>

#ifndef POINT_HPP
#define POINT_HPP

class Point        // class declaration
{
    
    private:
        double xPoint, yPoint;      // member variables which hold the x and y coordinate
    
public:
    Point();                        // default constructor
    Point(double x, double y);      // constructor that takes two doubles which represent an x and y coord
    void setXCoord(double);         // the set member functions for the class
    void setYCoord(double);
    double getXCoord();       // the get member functions for the class
    double getYCoord();
    double distanceTo(const Point&);    // distanceTo member function which utilizes the Pythagoreon theorem
    
};


#endif
