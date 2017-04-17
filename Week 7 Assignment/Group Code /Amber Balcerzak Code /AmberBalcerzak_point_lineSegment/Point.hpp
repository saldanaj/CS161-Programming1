#pragma once
//Amber Balcerzak
//October 29, 2015
//Point class

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double x_point;
	double y_point;
	double distance;

public:
	Point();
	Point(double, double);
	double getXCoord();
	double getYCoord();
	void setXCoord(double);
	void setYCoord(double);
	double distanceTo(const Point);

};
#endif
