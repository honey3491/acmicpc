#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[1001], n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n - k];
}   