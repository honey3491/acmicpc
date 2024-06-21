#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

map<string, bool>m;
vector<string>v;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string name, status;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> status;
        if (status == "enter")
            m[name] = true;
        else
            m.erase(name);
    }
    for (auto el : m)
    {
        v.push_back(el.first);
    }
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}