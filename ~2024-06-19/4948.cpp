#include <stdio.h>

int num[1000001];

void prime(int a, int b)
{
	int count = 0;
	num[0] = 1;
	num[1] = 1;

	for (int i = 2; i < b + 1; i++)
	{
		for (int j = 2 * i; j < b + 1; j += i)
			num[j] = 1;
	}
	for (int i = a + 1; i < b + 1; i++)
		if (num[i] == 0) count++;
	printf("%d\n", count);
}

int main()
{
	int a;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
			break;
		prime(a, 2 * a);
	}
}