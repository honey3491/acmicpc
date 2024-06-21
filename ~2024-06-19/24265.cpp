#include <iostream>

using namespace std;

int main()
{
    long long int a;
    cin >> a;
    if (a % 2 == 0)
    {
        a = a * (a / 2 - 1) + a / 2;
    }
    else
        a = a * (a / 2);
    cout << a << "\n2";
}