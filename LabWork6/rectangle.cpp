#include <iostream>
#include <iomanip>
#include <cmath>
#include "rectangle.h"

using namespace std;

rectangle::rectangle()
{
    setLength(0);
    setHeight(0);
}

rectangle::rectangle( int l, int h )
{
    setLength( l );
    setHeight( h );
}

rectangle::~rectangle(){};

void rectangle::setLength( int l )
{
    length = l;
}

void rectangle::setHeight( int h )
{
    height = h;
}

void rectangle::getRectangle(rectangle r)
{
    int n = 25;
    cout << setw(n) << "LENGTH = " << r.getLength() << endl;
    cout << setw(n) << "HEIGHT = " << r.getHeight() << endl;
    cout << setw(n) << "AREA = " << r.getArea() << endl;
    cout << setw(n) << "CIRCUMFERENCE = " << r.getCircumference() << endl;
    cout << setw(n) << "DIAGONAL LENGTH = " << setprecision(3) << r.getDLength() << endl;

}

int rectangle::getLength()
{
    return length;
}

int rectangle::getHeight()
{
    return height;
}

int rectangle::getArea()
{
    return ( getLength() * getHeight() );
}

int rectangle::getCircumference()
{
    return ( ( getLength() + getHeight() ) * 2 );
}

double rectangle::getDLength()
{
    return ( sqrt( pow( getLength(), 2 ) + pow( getHeight(), 2 ) ) );
}

void rectangle::getX_Base_Cord()
{
    cout << setw(17) << "x1:" << 0 << setw(8 ) << "y1:" << 0 << endl;
    cout << setw(17) << "x2:" << length << setw(8 ) << "y2:" << 0 << endl;
    cout << setw(17) << "x3:" << 0 << setw(8 ) << "y3:" << height << endl;
    cout << setw(17) << "x4:" << length << setw(8 ) << "y4:" << height << endl;
}
