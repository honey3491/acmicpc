#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string cmd;
    cin >> n >> k >> cmd;
    cmd = " " + cmd;
    int space[1005][25][3];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
            space[i][j][0] = space[i][j][1] = -1;
    }

    space[0][0][0] = 0;
    space[0][1][1] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (space[i][j][0] != -1)
            {
                if (cmd[i + 1] == 'L')
                {
                    space[i + 1][j][0] = max(space[i + 1][j][0], space[i][j][0] + 1);
                    space[i + 1][j + 1][1] = max(space[i + 1][j + 1][1], space[i][j][0]);
                }
                else
                {
                    space[i + 1][j][0] = max(space[i + 1][j][0], space[i][j][0]);
                    space[i + 1][j + 1][1] = max(space[i + 1][j + 1][1], space[i][j][0] + 1);
                }
            }
            if (space[i][j][1] != -1)
            {
                if (cmd[i + 1] == 'L')
                {
                    space[i + 1][j + 1][0] = max(space[i + 1][j + 1][0], space[i][j][1] + 1);
                    space[i + 1][j][1] = max(space[i + 1][j][1], space[i][j][1]);
                }
                else
                {
                    space[i + 1][j + 1][0] = max(space[i + 1][j + 1][0], space[i][j][1]);
                    space[i + 1][j][1] = max(space[i + 1][j][1], space[i][j][1] + 1);
                }
            }
        }

    }
    int result = 0;
    for (int j = 0; j <= k; j++)
    {
        result = max(result, space[n][j][0]);
        result = max(result, space[n][j][1]);
    }
    cout << result;

    return 0;
}