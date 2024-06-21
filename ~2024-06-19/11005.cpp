#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    string c = "";
    cin >> a >> b;
    for (int i = 0; a > 0; i++)
    {
        if (a % b < 10) {
            c += (char)('0' + a % b);
        }
        else
            c += (char)('A' - 10 + a % b);
        a /= b;
    }

    reverse(c.begin(), c.end());
    cout << c << "\n";
}