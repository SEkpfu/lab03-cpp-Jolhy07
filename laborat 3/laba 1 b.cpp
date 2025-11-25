#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y;
    x=0;

    do 
    {
        y = log(x+1)*sin(x);
        cout << "x = " << x << "\n" << "y = "<< y << "\n" << endl;
        x+=0.5;
    }
    while (x<5.5);

    return 0;
}