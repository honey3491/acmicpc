#include <iostream>

using namespace std;

int N, M;
int result[1000];
int checklist[1000];

void DFS(int L)
{
    int i, t = 1, tmp = 1;

    if (L == M)
    {
        for (i = 0; i < M; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            result[L] = i;
            DFS(L + 1);
        }
    }
}


int main(void) {
    cin >> N >> M;
    DFS(0);
}

