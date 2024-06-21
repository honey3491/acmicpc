#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, count;
    cin >> n;
    for (count = 0; n > sum; count++)
        sum += 4;
    for (int i = 0; i < count; i++)
        cout << "long ";
    cout << "int";
}