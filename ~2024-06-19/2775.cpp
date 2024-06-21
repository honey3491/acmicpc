#include <stdio.h>


int main()
{
	int n, a, b, sum, apart[15][15];
	for (int i = 0; i < 15; i++) apart[0][i] = i;
	for (int i = 0; i < 15; i++) apart[i][0] = 0;
	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d\n", apart[a][b]);
	}
}