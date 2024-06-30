#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    bool a = true;
    cin >> n;

    vector<int> space(n);
    for (int i = 0; i < n; ++i) {
        cin >> space[i];
    }

    vector<int> max_jumps(n, 0);
    if (space[0] != 0)
        max_jumps[0] = 1;
    for (int i = 0; i < n && max_jumps[i] != 0; i++)
    {
        for (int j = 1; j <= space[i]; j++)
        {
            if (i + j < n)
                max_jumps[i + j] = max(max_jumps[i + j], max_jumps[i] + 1);
        }
    }
    int result = max_jumps[0];
    for (int i = 1; i < n; ++i) {
        result = max(result, max_jumps[i]);
    }

    cout << result - 1 << endl;

    return 0;
}