#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    n = (M_PI*2)/(M_PI/6)+1;
    cout << n;

    for (double x{0}; x<(2*M_PI+0.00001); x+=M_PI/6)
    {
        double y;
        y=cos(x);
        cout << "x: " << (x/M_PI) << "П и y: " << y << endl;
    }

    return 0;
}