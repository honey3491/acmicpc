#include <iostream>

using namespace std;

int c(int num);

int main()
{
    int i, next = 0, num = 1, n[10001] = { 0, };
    for (i = 1; i < 10001; i++)
    {
        next = c(i);
        if (next < 10001)
            n[next]++;
    }
    for (i = 1; i < 10001; i++)
    {
        if (n[i] == 0)
            cout << i << endl;
    }
    return 0;
}

int c(int num)
{
    int sum = num;
    for (int i = 0; i < 5 && num != 0; i++)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}