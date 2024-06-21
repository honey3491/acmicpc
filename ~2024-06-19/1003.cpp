#include <iostream>
using namespace std;
long long fiboarr[50] = { 0,1, };
long long fibo(int a)
{
    if (a == 0 || a == 1)
        return fiboarr[a];
    else if (fiboarr[a] == 0)
        fiboarr[a] = fibo(a - 1) + fibo(a - 2);
    return fiboarr[a];
}
int main() {
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == 0)
            cout << "1 0" << '\n';
        else
            cout << fibo(num - 1) << ' ' << fibo(num) << '\n';
    }
}