#include <stdio.h>

int main()
{
	char board[50][50];
	int min = 80, N, M;
	int cntB = 0, cntW = 0;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%s", &board[i]);

	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			cntB = 0;
			cntW = 0;
			for (int a = i; a < i + 8; a++)
			{
				for (int b = j; b < j + 8; b++)
				{
					if ((a + b) % 2 == 0) {
						if (board[a][b] == 'B')
							cntW++;
						else
							cntB++;
					}
					else {
						if ((board[a][b]) == 'B')
							cntB++;
						else
							cntW++;
					}
				}
			}
			min = min > cntB ? cntB : min;
			min = min > cntW ? cntW : min;
		}
	}
	printf("%d\n", min);
}