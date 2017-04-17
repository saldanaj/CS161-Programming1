//Amber Balcerzak
//October 29, 2015
//Point code

#include <iostream>
#include "Point.hpp"


Point::Point() //default constructor
{
	setXCoord(0);
	setYCoord(0);
}
Point::Point(double x, double y) //overloaded constructor
{
	setXCoord(x);
	setYCoord(y);
}

void Point::setXCoord(double x) { //setting x and y
	x_point = x;
}
void Point::setYCoord(double y) {
	y_point = y;
}
double Point::getXCoord() {
	return x_point;
}
double Point::getYCoord() {
	return y_point;
}
double Point::distanceTo(const Point other) //getting distance from point to a constant point
{
	double xd = x_point - other.x_point;
	double yd = y_point - other.y_point;
	distance = sqrt(xd*xd + yd*yd);
	return distance;
}


