//Amber Balcerzak
//November 2, 2015
//LineSegment.cpp Assignment 6

#include "LineSegment.hpp"
#include <iostream>

using namespace std;

LineSegment::LineSegment(Point point_1, Point point_2) //constructor
{
	setEnd1(point_1);
	setEnd2(point_2);
}
void LineSegment::setEnd1(Point p_1) //setting endpoint1 of linesegment
{
	p1 = p_1;
}
void LineSegment::setEnd2(Point p_2) //setting endpoint2 of linesegment
{
	p2 = p_2;
}
Point LineSegment::getEnd1() //getting endpoint1
{
	return p1;
}
Point LineSegment::getEnd2() //getting endpoint2
{
	return p2;
}
double LineSegment::length() //calls the distanceTo from Point to find length of linesegment
{
	return p1.distanceTo(p2);
}
double LineSegment::slope() //uses getXCoord and getYCoord from point to calculate slope of line segment
{
	return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}
