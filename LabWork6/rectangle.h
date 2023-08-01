#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle
{
public:
    rectangle();
    rectangle( int, int );
    ~rectangle();
    void setLength( int );
    void setHeight( int );

    void getRectangle( rectangle );
    int getLength();
    int getHeight();
    int getArea();
    int getCircumference();
    double getDLength();

    void getX_Base_Cord ();

private:
    int length, height;
};

#endif //RECTANGLE
