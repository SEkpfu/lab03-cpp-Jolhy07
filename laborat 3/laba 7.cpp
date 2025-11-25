#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Введите n: ";
    cin >> n;
    double sum, x_last, y_last, x0, y0, distance_new;
    sum = 0;
    for (int i{0}; i < n; i++)
    {
        if (n == 1 || n == 0)
        {
            break;
        }
        double x, y, distance;
        cout << "Введи х с индексом " << (i + 1) << ": ";
        cin >> x;
        cout << "Введи y с индексом " << (i + 1) << ": ";
        cin >> y;
        if (i == 0)
        {
            x0 = x;
            y0 = y;
        }
        distance = sqrt(pow((x - x_last), 2) + pow((y - y_last), 2));
        sum += distance;
        x_last = x;
        y_last = y;
    }
    distance_new = sqrt(pow((x0 - x_last), 2) + pow((y0 - y_last), 2));
    sum += distance_new;

    cout << "Периметр: " << sum;

    return 0;
}