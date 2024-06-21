#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s;
    cin >> n;
    s = 0;
    for (int i = 1; i * i <= n; i++)
        s++;
    cout << s;
}