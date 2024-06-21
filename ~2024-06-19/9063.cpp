#include <iostream>

using namespace std;

int main() {
    long long n, x_min = 10000, y_min = 10000, x_max = -10000, y_max = -10000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > x_max)
            x_max = x;
        if (x < x_min)
            x_min = x;
        if (y > y_max)
            y_max = y;
        if (y < y_min)
            y_min = y;
    }

    cout << (x_max - x_min) * (y_max - y_min);
}