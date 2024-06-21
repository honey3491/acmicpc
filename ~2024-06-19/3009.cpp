#include <stdio.h>

int main()
{
	int num1[1001] = { 0, }, num2[1001] = { 0, }, a, b;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &a, &b);
		num1[a]++;
		num2[b]++;
	}
	for (int i = 0; i < 1001; i++)
	{
		if (num1[i] == 1)
			printf("%d", i);
	}
	for (int i = 0; i < 1001; i++)
	{
		if (num2[i] == 1)
			printf(" %d", i);
	}
}