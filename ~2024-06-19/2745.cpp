#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a;
    int b, sum = 0;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            sum = (sum * b + (a[i] - '0'));
        else
            sum = (sum * b + (a[i] - 'A' + 10));
    }
    cout << sum;
}