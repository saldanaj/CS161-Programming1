//Amber Balcerzak
//November 2, 2015
//Assignment 6 LineSegment class


#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{

private:
	Point p1;
	Point p2;

public:
	LineSegment(Point, Point); 
	void setEnd1(Point);
	void setEnd2(Point);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();

};
#endif;
