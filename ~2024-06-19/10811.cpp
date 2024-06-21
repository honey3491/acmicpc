#include <iostream>

using namespace std;

int main()
{
    int N, M, A[100], i, j, l;
    cin >> N >> M;
    for (l = 1; l <= N; l++)
        A[l] = l;
    for (l = 0; l < M; l++)
    {
        cin >> i >> j;
        for (int k = i; k <= (i + j) / 2; k++)
        {
            int tmp = A[k];
            A[k] = A[i + j - k];
            A[i + j - k] = tmp;
        }
    }
    for (l = 1; l <= N; l++)
    {
        cout << A[l] << " ";
    }
}