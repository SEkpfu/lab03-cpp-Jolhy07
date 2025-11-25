#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y, count, n;
    y = 0;
    x = 1;
    count = 0;
    n = 1;
    const double e = 0.001;
    while (x > e)
    {
        y = y + pow(-1, count) * x;
        count++;
        n += 2;
        x = 1 / n;
    }

    cout << y;

    return 0;
}