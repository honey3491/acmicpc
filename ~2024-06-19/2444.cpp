#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a - 1; j++)
            cout << " ";
        for (int j = 0; j <= i * 2; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = a - 2; i >= 0; i--)
    {
        for (int j = i; j < a - 1; j++)
            cout << " ";
        for (int j = 0; j <= i * 2; j++)
            cout << "*";
        cout << endl;
    }
}