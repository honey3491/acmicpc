#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b - a > c - b)
    {
        cout << b - a - 1 << endl;
    }
    else
    {
        cout << c - b - 1 << endl;
    }
    return 0;
}