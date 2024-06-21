#include <iostream>

using namespace std;

int n;

int recursion(string& s, int l, int r) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else {
        n++;
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(string& s) {
    return recursion(s, 0, s.length() - 1);
}

int main() {
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    string str;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        n = 1;
        cout << isPalindrome(str);
        cout << " " << n << "\n";
    }
}