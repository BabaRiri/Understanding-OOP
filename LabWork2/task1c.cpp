#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, n, ans = 1;

    cout << "Enter a base: ";
    cin >> n;

    cout << "Enter a exponent: ";
    cin >> m;

    for (size_t i = 0; i < m; i++)
    {
        ans = ans * n;
    }

    cout << n << " to the power " << m << " is: " << ans;

    return 0;
}