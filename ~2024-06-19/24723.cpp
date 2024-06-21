#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int c = 1; c < n; c++) {
        int sum1 = 1, sum2 = 1;
        for (int i = 1; i <= c; i++) {
            sum1 *= (n - i + 1);
            sum2 *= i;
        }
        sum += sum1 / sum2;
    }
    cout << sum + 2;
}