#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main() {

    while (1)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] + a[1] + a[2] == 0)
            return 0;

        sort(a, a + 3);
        if (a[2] >= a[0] + a[1])
            cout << "Invalid\n";
        else if (a[0] == a[1] && a[1] == a[2])
            cout << "Equilateral\n";
        else if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0])
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";

    }
}