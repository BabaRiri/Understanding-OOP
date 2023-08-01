#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float values[5] = {0};
    float sum = 0;

    cout << "Enter 5 floating-point values to be added." << endl;
    
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Value " << i + 1 << ": ";
        cin >> values[i]; 
    }

    for (size_t i = 0; i < 5; i++)
    {
        sum = sum + values[i];
    }

    cout << "The sum of the values is: " << sum << endl;

    return 0;
}
