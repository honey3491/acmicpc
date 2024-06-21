#include <iostream>
using namespace std;

int main()
{
    int a, b, c, tmp;
    cin >> a >> b >> c;

    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a > c)
    {
        tmp = a;
        a = c;
        c = b;
        b = tmp;
    }
    else if (b < c);
    else
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    cout << b << endl;
    return 0;
}