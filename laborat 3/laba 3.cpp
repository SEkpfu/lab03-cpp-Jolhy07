#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double n, sum;
    sum = 0;
    cout << "Введите n: ";
    cin >> n;
    for (double i{1}; i<(n+1); i++)
    {
        sum+=1/(2*i);
    }
    cout << sum;
    return 0;
}