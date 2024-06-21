#include <iostream>

using namespace std;

int is_prime(int n)
{
    if (n == 2 || n == 3)
        return 1;
    if (n <= 1 || n == 4)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int num, n, prime[1000001], count = 0, arr[1000001];
    for (int i = 0; i < 1000001; i++)
    {
        if (is_prime(i)) {
            prime[count++] = i;
            arr[i] = i;
        }
        else
            arr[i] = 0;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        int cnt = 0;
        for (int j = 0; prime[j] <= num / 2; j++)
        {
            if (arr[num - prime[j]] == num - prime[j])
                cnt++;
        }
        cout << cnt << "\n";
    }
}