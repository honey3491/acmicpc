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
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    for (l = 1; l <= N; l++)
    {
        cout << A[l] << " ";
    }
}