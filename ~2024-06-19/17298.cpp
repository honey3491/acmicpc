#include <iostream>
#include <stack>

using namespace std;

int n;
int num[1000001];
int ans[1000001];
stack<int> s;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= num[i]) {
            s.pop();
        }
        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }
        s.push(num[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}