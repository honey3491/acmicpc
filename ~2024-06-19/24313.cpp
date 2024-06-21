#include <iostream>

using namespace std;

int main()
{
    long long int a1, a0, c, n;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n;

    if (a0 <= n * (c - a1) && c - a1 >= 0)
        cout << "1";
    else
        cout << "0";

}