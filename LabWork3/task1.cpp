#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T distance(T x1, T x2, T y1, T y2)
{
    T d;
    d = sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));
    return d;
}

int main()
{
    int a1, a2, b1, b2;
    double c1, c2, d1, d2;

    cout << "---------------------------------------" << endl;
    cout << "DISTANCE CALCULATOR WITH INTEGER VALUES" << endl;
    cout << "---------------------------------------" << endl;
    cout << "FIRST POINT:" << endl;
    cout << "X-Cordinate = ";
    cin >> a1;
    cout << "Y-Cordinate = ";
    cin >> b1;
    cout << endl;

    cout << "SECOND POINT:" << endl;
    cout << "X-Cordinate = ";
    cin >> a2;
    cout << "Y-Cordinate = ";
    cin >> b2;
    cout << endl;

    cout << "Distance = " << distance(a1, a2, b1, b2) << endl;

    cout << "---------------------------------------" << endl;
    cout << "DISTANCE CALCULATOR WITH DOUBLE VALUES" << endl;
    cout << "---------------------------------------" << endl;
    cout << "FIRST POINT:" << endl;
    cout << "X-Cordinate = ";
    cin >> c1;
    cout << "Y-Cordinate = ";
    cin >> d1;
    cout << endl;

    cout << "SECOND POINT:" << endl;
    cout << "X-Cordinate = ";
    cin >> c2;
    cout << "Y-Cordinate = ";
    cin >> d2;
    cout << endl;

    cout << "Distance = " << distance(c1, d2, c1, d2);
    return 0;
}
