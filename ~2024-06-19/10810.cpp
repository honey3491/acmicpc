#include <iostream>

using namespace std;

int main()
{
    int N, M, A[100] = { 0, }, i, j, k, l;
    cin >> N >> M;
    for (l = 0; l < M; l++)
    {
        cin >> i >> j >> k;
        for (int h = i; h <= j; h++)
        {
            A[h] = k;
        }
    }
    for (l = 1; l <= N; l++)
    {
        cout << A[l] << " ";
    }
}