#include <iostream>
using namespace std;

int main() {
    int n, m, r, c, sum = 0, space[100][100] = { 0, }, dice[3] = { 1, 2, 3 }; //up, front, right;
    char move;
    cin >> n >> m >> r >> c;
    r--;
    c--;
    space[r][c] = 6;
    for (int i = 0; i < m; i++)
    {
        cin >> move;
        switch (move)
        {
        case 'L':
            if (c == 0);
            else
            {
                dice[0] = dice[2];
                dice[2] = space[r][c];
                space[r][--c] = 7 - dice[0];
            }
            break;
        case 'R':
            if (c == n - 1);
            else
            {
                dice[0] = 7 - dice[2];
                dice[2] = 7 - space[r][c];
                space[r][++c] = 7 - dice[0];
            }
            break;
        case 'U':
            if (r == 0);
            else
            {
                dice[0] = dice[1];
                dice[1] = space[r][c];
                space[--r][c] = 7 - dice[0];
            }
            break;
        case 'D':
            if (r == n - 1);
            else
            {
                dice[0] = 7 - dice[1];
                dice[1] = 7 - space[r][c];
                space[++r][c] = 7 - dice[0];
            }
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            sum += space[i][j];
    }
    cout << sum;
    return 0;
}