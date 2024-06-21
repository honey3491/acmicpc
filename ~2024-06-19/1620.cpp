#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    map <int, string>m;
    map<string, int>n;
    int N, M;
    string name, order;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> name;
        m[i] = name;
        n[name] = i;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> order;
        if (order[0] >= '0' && order[0] <= '9')
        {
            int a;
            a = stoi(order);
            cout << m[a] << "\n";
        }
        else
        {
            cout << n[order] << "\n";
        }
    }
}