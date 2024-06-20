#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    vector <int>s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x, cmd;
        cin >> cmd;
        switch (cmd) {
        case 1:
            cin >> x;
            s.push_back(x);
            break;
        case 2:
            if (s.empty())
                cout << "-1";
            else {
                cout << s.back();
                s.pop_back();
            }
            cout << "\n";
            break;
        case 3:
            cout << s.size() << "\n";
            break;
        case 4:
            cout << s.empty() << "\n";
            break;
        case 5:
            if (s.empty())
                cout << "-1\n";
            else
                cout << s.back() << "\n";
            break;
        default:
            break;
        }
    }
    return 0;
}