#include <iostream>
char a[5][16];
using namespace std;
int main() {

    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[j][i] != '\0')
                cout << a[j][i];
        }
    }
}