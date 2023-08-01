#ifndef LABWORK7_LINE_H
#define LABWORK7_LINE_H

class Point {
public:
    Point();
    Point( int, int );
    Point( const Point& );
    ~Point();

    void set_x( int );
    void set_y( int );

    int get_x();
    int get_y();

    void print();

private:
    int x, y;

};

class Line {
public:
    Line();
    Line( Point, Point );
    Line( const Line& );
    ~Line();

    void set_point1( Point );
    void set_point2( Point );

    double get_slope();

    void print();

private:
    Point p1, p2;

};
#endif //LABWORK7_LINE_H
