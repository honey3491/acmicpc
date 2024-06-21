#include <iostream>
using namespace std;
int main() {
    int a, max = -1, max_add[2];
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cin >> a;
            if (a > max)
            {
                max = a;
                max_add[0] = i;
                max_add[1] = j;
            }
        }
    }
    cout << max << endl << max_add[0] << " " << max_add[1];
}