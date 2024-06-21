#include <stdio.h>

int prime(int n)
{
	int t = 1;
	if (n < 2)
		t = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			t = 0;
	}
	return t;
}

int main()
{
	int a, b, min = -1, sum = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	for (int i = a; i <= b; i++)
	{
		if (prime(i) == 1)
		{
			sum += i;
			if (min == -1)
				min = i;
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
}