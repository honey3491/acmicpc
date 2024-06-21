#include <iostream>

using namespace std;

int main()
{
    int i, n, mult = 1;
    cin >> n;
    for (i = n; i > 1; i--)
        mult *= i;
    cout << mult;
    return 0;
}