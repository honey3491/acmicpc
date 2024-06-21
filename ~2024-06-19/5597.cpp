#include <iostream>

using namespace std;

int main()
{
    int A[31] = { 0, }, num;
    for (int i = 0; i < 28; i++)
    {
        cin >> num;
        A[num] = 1;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (A[i] == 0)
            cout << i << endl;
    }
}