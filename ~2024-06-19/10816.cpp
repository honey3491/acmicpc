#include <iostream>
#include <map>

using namespace std;

map<int, int>card;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int a, num;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> num;
        card[num]++;
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> num;
        cout << card[num] << " ";
    }
}