#include <iostream>
using namespace std;

int main() {
    int n, m, r, c, count = 1;
    cin >> n >> m;
    int space[9][9] = { 0, };

    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        space[r - 1][c - 1] = count++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << space[i][j] << " ";
        cout << "\n";
    }
    return 0;
}