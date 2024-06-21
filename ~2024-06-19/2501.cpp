#include <iostream>

using namespace std;

int main() {
    int a[100], N, K, count = 0;

    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            a[count++] = i;
    }
    if (count < K)
        cout << 0;
    else
        cout << a[K - 1];
    return 0;
}