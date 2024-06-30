#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Position {
    int x, y, steps;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    vector<pair<int, int>> directions = { {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1} };

    queue<Position> q;
    vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    q.push({ r1, c1, 0 });
    visited[r1][c1] = true;

    while (!q.empty()) {
        Position current = q.front();
        q.pop();

        if (current.x == r2 && current.y == c2) {
            cout << current.steps << endl;
            return 0;
        }

        for (auto dir : directions) {
            int newX = current.x + dir.first;
            int newY = current.y + dir.second;

            if (newX >= 1 && newX <= n && newY >= 1 && newY <= n && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({ newX, newY, current.steps + 1 });
            }
        }
    }

    cout << -1 << endl;
    return 0;
}