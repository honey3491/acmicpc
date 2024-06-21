#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}
unordered_map <string, int> ma;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string eng;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> eng;
        if (eng.length() >= m)
            ma[eng]++;
    }
    vector<pair<string, int>> v(ma.begin(), ma.end());
    sort(v.begin(), v.end(), cmp);
    for (auto p : v)
        cout << p.first << "\n";
}