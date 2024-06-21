#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int aa[100][100] = { 0,

    }, n, a, b, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (aa[a + j][b + k] == 1)
                    continue;
                else
                    aa[a + j][b + k] = 1;
            }
        }
    }
    for (int j = 0; j < 100; j++)
    {
        for (int k = 0; k < 100; k++)
        {
            if (aa[j][k] == 1)
                count++;
        }
    }
    cout << count;
}