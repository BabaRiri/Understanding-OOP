#include <iostream>
#include <iomanip>
#include "rectangle.h"

using namespace std;

int main() {
    rectangle r;
    int length, height;

    cout << "-------------------------------------------" << endl;
    cout << "|     OPERATIONS ON A RECTANGLE OBJECT    |" << endl;
    cout << "-------------------------------------------" << endl;

    cout << setw(25) << "Enter the length:";
    cin >> length;
    r.setLength(length);

    cout << setw(25) << "Enter the height:";
    cin >> height;
    r.setHeight(height);

    cout << endl;

    r.getRectangle( r );
    cout << "-------------------------------------------" << endl;
    cout << "|     RECTANGLE OBJECT CREATED USING      |" <<endl;
    cout << "|               CONSTRUCTOR               |" << endl;
    cout << "-------------------------------------------" << endl;

    rectangle r1(3, 1);

    cout << endl;

    r1.getRectangle( r1 );

    cout << "-------------------------------------------" << endl;
    cout << "|              OPTIONAL TASK               |" << endl;
    cout << "-------------------------------------------" << endl;


    r1.getX_Base_Cord();
    cout << endl;

    cout << "-------------------------------------------" << endl;
    cout << "|              END OF PROGRAM             |" << endl;
    cout << "-------------------------------------------" << endl;

    return 0;
}
