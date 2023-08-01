#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int value = 0;
    double sum = 0.0;
    int n = 0;
    vector<int> data;

    cout << "===================================" << endl;
    cout << "       STATISTICS CALCULATOR       " << endl;
    cout << "===================================" << endl;
    cout << "         ENTER Q TO EXIT         " << endl;
    cout << "-----------------------------------" << endl;

    cout << setw(20) << "ENTER VALUE: ";
    while (cin >> value)
    {
        cout << setw(20) << "ENTER VALUE: ";
        data.push_back(value);
    }

    for (size_t i = 0; i < data.size(); i++)
    {
        sum += data[i];
    }

    cout << "-----------------------------------" << endl;

    cout << setw(14) << "UNSORTED DATA:";
    for (size_t i = 0; i < data.size(); i++)
    {
        cout << setw(3) << data[i];
    }
    cout << endl;

    int i, hold, j;

    for (i = 1; i < data.size(); i++)
    {
        hold = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > hold)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }

        data[j + 1] = hold;
    }

    cout << setw(14) << "SORTED DATA:";
    for (size_t i = 0; i < data.size(); i++)
    {
        cout << setw(3) << data[i];
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    cout << setw(20) << "MEAN = " << setw(3) << sum / data.size() << endl;

    double mid;
    if (data.size() % 2 != 0)
    {
        mid = (double)data[data.size() / 2];
    }
    else
    {
        mid = (double)(data[(data.size() - 1) / 2] + data[data.size() / 2]) / 2.0;
    }

    cout << setw(20) << "MEDIAN = " << setw(3) << mid << endl;
    cout << setw(20) << "MINIMUM = " << setw(3) << data.front() << endl;
    cout << setw(20) << "MAXIMUM = " << setw(3) << data.back() << endl;

    double stdDvn = 0.0;
    double stdDvnAns;

    for (int i = 0; i < data.size(); ++i)
    {
        stdDvn += pow(data[i] - (sum / data.size()), 2);
    }

    stdDvnAns = sqrt(stdDvn / data.size());

    cout << setw(20) << "STD DEVIATION = " << setw(3) << stdDvnAns << endl;

    cout << "===================================" << endl;

    return 0;
}
