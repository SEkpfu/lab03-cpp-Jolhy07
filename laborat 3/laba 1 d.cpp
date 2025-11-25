#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    for(double x{-1.5}; x<(1.5+0.000001); x+=0.25)
    {
        double y;
        if (x<-0.5)
        {
            y = 1-pow(x, 2);
        }
        else if(x>1)
        {
            y = 1 + sqrt(fabs(cos(x)));
        }
        else
        {
            y= x+1;
        }
        cout << "x: " << x << " и y: " << y << endl;
    }

    return 0;
}