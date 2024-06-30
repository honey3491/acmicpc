#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k, sum = 0, count = 0, input;
    cin >> n >> m >> k;
    m--;
    deque<int> number;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        number.push_back(input);
    }
    sort(number.begin(), number.end());
    while (!number.empty())
    {
        if (count == k)
            break;
        sum = number.back();
        number.pop_back();
        if (sum >= m - 1) {
            count++;
            continue;
        }
        while (!number.empty() && sum < m - 1)
        {
            sum += number.front();
            number.pop_front();
            if (sum >= m - 1)
                count++;
        }
    }
    cout << count;
    return 0;
}