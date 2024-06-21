#include <iostream>

using namespace std;

int main()
{
    long long int a, sum = 0;
    cin >> a;
    for (int i = a - 2; i >= 1; i--)
        sum += i * (a - 1 - i);
    cout << sum << "\n3";
}