#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>cost;

int visited[501][501];

int main()
{
    int n;
    int cost[501];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> visited[i][j];
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            visited[i - 1][j] += max(visited[i][j], visited[i][j + 1]);
        }
    }
    cout << visited[0][0] << "\n";
}
