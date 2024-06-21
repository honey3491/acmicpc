#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char S[1001];
        cin >> S;
        cout << S[0] << S[strlen(S) - 1] << endl;
    }
}