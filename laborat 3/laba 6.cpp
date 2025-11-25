#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int count, y, count2;
    string s;
    s = "None";
    count = 0;
    count2 = 0;
    y = 1;
    while (true)
    {
        int x;

        cout << "Введите x: ";
        cin >> x;
        cout << "Введите stop, если хотите завершить: ";
        cin >> s;
        y = x;
        if (count == -1 && y == false)
        {
            y = 1;
            count;
            continue;
        }
        count++;
        if ((x % 2) == 0)
        {
            count2++;
        }
        if (s == "stop")
        {
            break;
        }
    }
    cout << "Всего введено чисел: " << count << endl;
    cout << "Из них чётных: " << count2;

    return 0;
}