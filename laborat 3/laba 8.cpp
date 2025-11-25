#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Введите чётное число n: ";
    cin >> n;
    for (int i{0}; i < n; i++)
    {
        for (int j{0}; j < n; j += 2)
        {
            if ((i % 2) == 0)
            {
                cout << " o  * ";
            }
            if (!(i % 2) == 0)
            {
                cout << " *  o ";
            }
        }
        cout << "\n";
    }

    return 0;
}