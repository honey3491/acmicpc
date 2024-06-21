#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;

    while (1)
    {
        int sum = 0;
        int count = 0, a[100];
        cin >> N;
        if (N == -1)
            break;
        for (int i = 1; i < N; i++)
        {
            if (N % i == 0) {
                a[count++] = i;
                sum += i;
            }
        }
        if (sum == N)
        {
            cout << N << " = ";
            for (int i = 0; i < count - 1; i++)
                cout << a[i] << " + ";
            cout << a[count - 1] << endl;
        }
        else
            cout << N << " is NOT perfect." << endl;
    }
    return 0;
}