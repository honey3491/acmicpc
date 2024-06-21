#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>cost;

int visited[1001][3];

int main()
{
    int n;
    int cost[3];
    visited[0][0] = visited[0][1] = visited[0][2] = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        visited[i][0] = min(visited[i - 1][1], visited[i - 1][2]) + cost[0];
        visited[i][1] = min(visited[i - 1][0], visited[i - 1][2]) + cost[1];
        visited[i][2] = min(visited[i - 1][1], visited[i - 1][0]) + cost[2];
    }
    cout << min(min(visited[n][0], visited[n][1]), visited[n][2]) << "\n";
}
