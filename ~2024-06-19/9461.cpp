#include <iostream>

using namespace std;

int n;
long long answer[110] = { 0, };

void fibo()
{
    for (int i = 6; i <= 109; i++)
    {
        answer[i] = answer[i - 1] + answer[i - 5];
    }
};

int main()
{
    cin >> n;
    answer[0] = 0;
    answer[1] = 1;
    answer[2] = 1;
    answer[3] = 1;
    answer[4] = 2;
    answer[5] = 2;

    fibo();
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << answer[a] << "\n";
    }
}