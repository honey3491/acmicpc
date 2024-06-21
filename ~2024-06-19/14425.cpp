// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, bool> m;
string str;

int main() {
    int N, M, count = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        m.insert(pair<string, bool>(str, true));
    }
    for (int i = 0; i < M; i++)
    {
        cin >> str;
        if (m[str] == true) {
            count++;
        }
    }
    cout << count;
}