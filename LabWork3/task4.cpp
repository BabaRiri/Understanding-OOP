#include <iostream>
#include <cmath>
using namespace std;

inline double area(double r)
{
    return (M_PI * pow(r, 2));
}

inline double volume(double r, double h)
{
    return (area(r) * h);
}
int main()
{
    double radius, height;

    cout << "---------------------------------------------------------" << endl;
    cout << "PROGRAM TO CALCULATE AREA OF CIRCLE & VOLUME OF CYLINDER" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the height: ";
    cin >> height;

    cout << "---------------------------------------------------------" << endl;
    cout << "AREA = " << area(radius) << endl;
    cout << "VOLUME = " << volume(radius, height) << endl;
    cout << "---------------------------------------------------------" << endl;

    return 0;
}
