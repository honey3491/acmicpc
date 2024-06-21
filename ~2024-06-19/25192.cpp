#include <iostream>
#include <map>
#include <cstring>

using namespace std;

map <string, bool> m;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    string chat;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> chat;
        if (chat == "ENTER")
            m.clear();
        else
        {
            if (m[chat] == true);
            else
            {
                sum++;
                m[chat] = true;
            }
        }
    }
    cout << sum;
}