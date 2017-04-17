/*********************************
 * Author: Vijay Kumar
 * Assignment: Week 6
 * Date: 11/2/15
 * *********************************/


#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
    double xCoord;
    double yCoord;
    
public:
    Point (double, double);
    Point ();
    double getXCoord();
    double getYCoord();
    void setXCoord(double);
    void setYCoord (double);
    double distanceTo(const Point&);
    
};
#endif
