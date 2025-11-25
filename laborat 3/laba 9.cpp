#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int count, y, count_max, max;
    count = 0;
    count_max = 0;
    y = 1;
    max = 0;
    while (!y == false)
    {
        int x;

        cout << "Если хотите прекратить ввод, введите 0" << "\n"
             << "Введите x: ";
        cin >> x;
        y = x;
        if (count == 0)
        {
            max = x;
        }
        else if (x > max)
        {
            max = x;
            count_max = 0;
        }
        if (max == x)
        {
            count_max++;
        }
        count++;
    }
    cout << "Количество наибольших элементов: " << count_max << endl;

    return 0;
}