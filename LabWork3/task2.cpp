#include <iostream>
using namespace std;

int volume(int a = 1, int b = 1, int c = 1);

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "VOLUME CALCULATOR WITH DEFAULT ARGUMENTS" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Results with different function calls:" << endl;
    cout << volume() << endl;
    cout << volume(2) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(2, 3, 4) << endl;

    return 0;
}

int volume(int a, int b, int c)
{
    return (a * b * c);
}
