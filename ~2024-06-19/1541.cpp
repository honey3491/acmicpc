#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string expression;

int main()
{
    int n = 0, sum = 0;
    bool plus = true;
    cin >> expression;

    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] >= '0' && expression[i] <= '9')
            n = n * 10 + (expression[i] - '0');
        else
        {
            if (plus)
                sum += n;
            else
                sum -= n;
            if (expression[i] == '-')
                plus = false;
            n = 0;
        }
    }
    if (plus)
        sum += n;
    else
        sum -= n;
    cout << sum;
}
