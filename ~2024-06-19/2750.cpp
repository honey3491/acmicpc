#include <iostream>
#define swap(a, b){int c; c = a; a = b; b = c;}

using namespace std;

int main()
{
    int a[1000] = { 0, }, i, j, n;

    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
        cout << a[i] << endl;
    }
    return 0;
}