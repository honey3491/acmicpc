#include <iostream>
using namespace std;

int main()
{
    int M, N, i, j, k, A[101], tmp[101];
    cin >> M >> N;
    for (int l = 1; l <= M; l++)
        A[l] = l;
    for (int l = 0; l < N; l++)
    {
        cin >> i >> j >> k;
        int count = i;
        for (int m = k; m <= j; m++)
        {
            tmp[count++] = A[m];
        }
        for (int m = i; m < k; m++)
        {
            tmp[count++] = A[m];
        }
        for (int m = i; m <= j; m++)
        {
            A[m] = tmp[m];
        }
    }
    for (int l = 1; l <= M; l++)
        cout << A[l] << " ";
}