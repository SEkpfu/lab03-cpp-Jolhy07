#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double i;
    i = 0;
    while (i <= 100)
    {
        cout << i << "C" << " или " << ((9.0 / 5.0) * i + 32.0) << "F" << endl;
        i += 10;
    }

    return 0;
}