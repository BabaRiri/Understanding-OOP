#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int values[5] = {0};
    int smallest;

    cout << "Enter 5 integers, the program will find the smallest." << endl;

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Value " << i + 1 << ": ";
        cin >>
            values[i];
    }

    smallest = values[0];

    for (size_t i = 1; i < 5; i++)
    {
        if (values[i] < smallest)
        {
            smallest = values[i];
        }
    }

    cout << "The smallest value is: " << smallest << endl;

    return 0
}