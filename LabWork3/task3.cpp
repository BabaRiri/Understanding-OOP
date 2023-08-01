#include <iostream>
using namespace std;

void swapCPP(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void swapC(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char a = 'A', b = 'B';
    char x = 'X', y = 'Y';

    cout << "------------------------------------------------" << endl;
    cout << "PROGRAM TO SWAP 2 CHARACTERS PASSED BY REFERENCE" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "TEST 1" << endl;
    cout << "-------" << endl;
    cout << "BEFORE SWAP: " << a << "   " << b << endl;
    swapCPP(a, b);
    cout << "AFTER SWAP: " << a << "   " << b << endl;
    cout << endl;

    cout << "TEST 2" << endl;
    cout << "-------" << endl;
    cout << "BEFORE SWAP: " << x << "   " << y << endl;
    swapCPP(x, y);
    cout << "AFTER SWAP: " << x << "   " << y << endl;
    cout << endl;

    cout << "----------------------------------------------------" << endl;
    cout << "VERSION USING C-STYLE CALL-BY-REFERENCE METHODOLOGY" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "BEFORE SWAP: " << a << "   " << b << endl;
    swapC(&a, &b);
    cout << "AFTER SWAP: " << a << "   " << b << endl;
    cout << endl;

    return 0;
}
