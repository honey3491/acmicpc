#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string name;
map<string, bool>ma;
vector<string> result;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        ma[name] = true;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> name;
        if (ma[name] == true) {
            result.push_back(name);
        }
    }
    cout << result.size() << endl;
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
}