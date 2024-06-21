#include <iostream>
#include <map>
#include <string>

using namespace std;
map<string, bool>m;

int main()
{
    string s, tmp = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        tmp = s[i];
        m[tmp] = true;
        for (int j = i + 1; j < s.size(); j++)
        {
            tmp += s[j];
            m[tmp] = true;
        }
    }
    cout << m.size();
}