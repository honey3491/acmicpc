#include <iostream>
using namespace std;

int main()
{
    int test, cost;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> cost;
        int a = 0, b = 0, c = 0, d = 0;
        if (cost >= 25)
        {
            a = cost / 25;
            cost %= 25;
        }
        if (cost >= 10)
        {
            b = cost / 10;
            cost %= 10;
        }
        if (cost >= 5)
        {
            c = cost / 5;
            cost %= 5;
        }
        d = cost;
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}