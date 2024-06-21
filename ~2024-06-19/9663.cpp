#include <iostream>
#include <algorithm>
using namespace std;

int N, cnt = 0;
int result[1000];
int check(int L)
{
    for (int j = 0; j < L; j++)
    {
        if (result[L] == result[j] || L - j == abs(result[L] - result[j]))
            return 0;
    }
    return 1;
}
void DFS(int L)
{
    if (L == N)
    {
        cnt++;
    }
    else {
        for (int i = 0; i < N; i++)
        {
            result[L] = i;
            if (check(L)) {
                DFS(L + 1);
            }
        }
    }
}


int main(void) {
    cin >> N;
    DFS(0);
    cout << cnt;
}

