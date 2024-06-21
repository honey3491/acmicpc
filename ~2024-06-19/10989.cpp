#include <stdio.h>

int main()
{
	int num[10001] = { 0, }, s, n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s);
		num[s]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = num[i]; j > 0; j--)
			printf("%d\n", i);
	}
}