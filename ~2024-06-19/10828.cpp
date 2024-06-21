#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ins;
        cin >> ins;
        if (ins == "pop")
        {
            if (!s.empty()) {
                cout << s.top() << endl;
                s.pop();
            }
            else
                cout << "-1" << endl;
        }
        if (ins == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (ins == "top")
        {
            if (s.empty())
                cout << "-1" << endl;
            else
                cout << s.top() << endl;
        }
        else if (ins == "size")
        {
            cout << s.size() << endl;
        }
        else if (ins == "empty")
        {
            if (s.empty())
                cout << "1";
            else
                cout << "0";
            cout << endl;
        }
    }
}