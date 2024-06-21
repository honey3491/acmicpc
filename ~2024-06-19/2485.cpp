// Online C++ compiler to run C++ program online
#include <iostream>
#include <numeric>

using namespace std;

int loc;

int main() {
    long long int N, dis = 0, min, max;
    cin >> N;
    cin >> loc;
    min = loc;
    for (int i = 1; i < N; i++)
    {
        int tmp = loc;
        cin >> loc;
        if (dis == 0)
            dis = loc - tmp;
        else
            dis = gcd(loc - tmp, dis);
    }
    max = loc;
    cout << (max - min) / dis - N + 1;
}