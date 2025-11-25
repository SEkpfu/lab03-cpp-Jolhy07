#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double x;

    cout << "Введте n: ";
    cin >> n;
    cout << "Введите x: ";
    cin >> x;
    const double x0 = x;

    for (int i{0}; i < (n - 1); i++)
    {
        x = x0 + cos(x);
    }
    x = cos(x);

    cout << x;

    return 0;
}