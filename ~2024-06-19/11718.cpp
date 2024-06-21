#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string S;
    for (int i = 0; i < 100; i++) {
        getline(cin, S);
        cout << S;
        cout << endl;
    }
}