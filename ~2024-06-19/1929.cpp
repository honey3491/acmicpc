#include <stdio.h>

int num[1000001];

void prime(int a, int b)
{

	num[0] = 1;
	num[1] = 1;

	for (int i = 2; i < b + 1; i++)
	{
		for (int j = 2 * i; j < b + 1; j += i)
			num[j] = 1;
	}
	for (int i = a; i < b + 1; i++)
		if (num[i] == 0) printf("%d\n", i);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	prime(a, b);
}