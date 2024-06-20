#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    vector <int>s;
    cin >> N;
    for (int i = 0; i < N; i++){
        int x, cmd;
        cin >> cmd >> x;
        switch (cmd){
            case 1:
                s.push_back(x);
                break;
            case 2:
                if(s.empty())
                    cout <<"-1";
                else
                    s.pop_back();
                    for(int j = 0; j < s.size(); j++)
                        cout << s[j] << " ";
                break;
            case 3:
                cout << s.size();
                break;
            case 4:
                cout << s.empty();
                break;
            case 5:
                if (s.empty())
                    cout << "-1";
                else
                    cout << s.back();
                break;
            default:
                break;
        }
    }
    return 0;
}