#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> num;

int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        num.push_back(a);
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < n; i++)
        sum += num[i] * (n - i);
    cout << sum;
}
