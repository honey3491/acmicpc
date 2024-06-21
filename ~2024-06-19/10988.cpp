#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    bool t = true;
    cin >> s;
    int length = strlen(s) - 1;
    for (int i = 0; i <= length / 2; i++) {
        if (s[i] != s[length - i])
            t = false;
    }
    if (t)
        cout << "1";
    else
        cout << "0";
}