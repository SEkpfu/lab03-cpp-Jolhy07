#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double sum, min;
    sum = 0;
    int count;
    count = 0;
    for (int i{1}; i <= 7; i++)
    {
        double x;
        cout << "Введи число номер " << i << ": ";
        cin >> x;
        if (x < 0)
        {
            count++;
        }
        if ((x < 100 && x >= 10) || (x > -100 && x <= -10))
        {
            sum += x;
        }
        if (i == 1)
        {
            min = x;
        }
        if (i>1)
        {
            if (min > x)
            {
                min = x;
            }
        }
    }

    cout << "Количество отрицательных чисел: " << count << "\n"
         << "Сумма двузначных чисел: " << sum << "\n"
         << "Самое маленбкое число: " << min;

    return 0;
}