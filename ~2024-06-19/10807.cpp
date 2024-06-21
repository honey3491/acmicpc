#include <iostream>

using namespace std;

int main()
{
    int N, a[100], v, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    cin >> v;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
            sum++;
    }
    cout << sum;
}