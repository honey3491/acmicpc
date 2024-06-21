#include <stdio.h>

int main(void)
{
	int a, b, i, min = 1000000, max = -1000000;

	scanf("%d", &b);

	for (i = 0; i < b; i++)
	{
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	printf("%d %d", min, max);
	return 0;
}