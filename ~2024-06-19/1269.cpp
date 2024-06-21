#include <iostream>
#include <map>
using namespace std;
int num;
map<int, bool>a;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        cin >> num;
        if (a[num] == true)
            a.erase(num);
        else
            a[num] = true;
    }
    cout << a.size();
}