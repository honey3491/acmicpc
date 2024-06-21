#include <iostream>
#include <map>
#include <cstring>

using namespace std;

map <string, bool> m;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    m["ChongChong"] = true;
    int n, sum = 1;
    string name1, name2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name1 >> name2;
        if (m[name1] == true && m[name2] == true);
        else if (m[name1] == true || m[name2] == true) {
            m[name2] = true;
            m[name1] = true;
            sum++;
        }
        else;
    }
    cout << sum;
}