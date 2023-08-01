#include <iostream>
#include <iomanip>
#include "line.h"

using namespace std;

int main()
{
    int x, y;

    cout << "---------------------------------------" << endl;
    cout << "  CARTESIAN COORDINATE SYSTEM PROGRAM  " << endl;
    cout << "---------------------------------------" << endl;

    cout << setw(22) << "POINT 1" << endl;
    cout << setw(22) << "Enter x:";
    cin >> x;

    cout << setw(22) << "Enter y:";
    cin >> y;

    Point p1( x, y );

    cout << "---------------------------------------" << endl;

    cout << setw(22) << "POINT 2" << endl;
    cout << setw(22) << "Enter x:";
    cin >> x;

    cout << setw(22) << "Enter y:";
    cin >> y;

    Point p2( x, y );

    Line a( p1, p2 );

    cout << "---------------------------------------" << endl;

    a.print();

    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "            END OF PROGRAM             " << endl;
    cout << "---------------------------------------" << endl;

    return 0;
}