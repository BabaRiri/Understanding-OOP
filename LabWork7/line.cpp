#include <iostream>
#include "line.h"
using namespace std;

Point::Point() : x( 0 ), y( 0 ) {}

Point::Point( int x, int y )
{
    set_x( x );
    set_y( y );
}

Point::Point( const Point& copy ) : x( copy.x ), y( copy.y ) {}

Point::~Point(){}

void Point::set_x( int x )
{
    this->x = x;
}

void Point::set_y( int y )
{
    this->y = y;
}

int Point::get_x()
{
    return x;
}

int Point::get_y()
{
    return y;
}

void Point::print()
{
    cout << " POINT: [ " << x << ", " << y << " ]";
}



Line::Line(){}

Line::Line ( Point p1, Point p2 )
{
    set_point1( p1 );
    set_point2( p2 );
}

Line::Line( const Line& copy ) : p1(copy.p1), p2(copy.p2) {}

Line::~Line() {}

void Line::set_point1( Point p )
{
    p1 = p;
}

void Line::set_point2( Point p )
{
    p2 = p;
}

double Line::get_slope()
{
    return ( (double) ( p1.get_y() - p2.get_y() ) / ( p1.get_x() - p2.get_x() ) );
}

void Line::print()
{
    cout << "        A line passing through         " << endl;
    p1.print();
    cout << "   and ";
    p2.print();
    cout << endl;
    cout << "             SLOPE = " << get_slope();
}