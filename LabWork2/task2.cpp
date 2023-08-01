#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int input, a, b, ans;

    cout << "-------------" << endl;
    cout << "PROGRAM MENU" << endl;
    cout << "-------------" << endl;
    cout << "1. Add" << endl
         << "2. Subtract" << endl;
    cout << "3. Multiply" << endl
         << "4. Quit" << endl;
    cout << "-------------" << endl;
    cout << "INPUT: ";
    cin >> input;
    cout << "-------------" << endl;

    if (input < 4)
    {
        cout << "Enter first value: ";
        cin >> a;
        
        cout << "Enter second value: ";
        cin >> b;
    }

    switch (input)
    {
    case 1:
        ans = a + b;
        cout << a << " + " << b << " = " << ans;
        break;
    case 2:
        ans = a - b;
        cout << a << " - " << b << " = " << ans;
        break;
    case 3:
        ans = a * b;
        cout << a << " * " << b << " = " << ans;
        break;
    case 4:
        cout << "QUITTING...";
        break;
    default:
        cout << "INVALID INPUT!";
        break;
    }
    return 0;
}
