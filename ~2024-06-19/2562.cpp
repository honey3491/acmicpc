#include <stdio.h>

int main(void)
{
	int a, count, max = 0;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &a);

		if (a > max)
		{
			count = i;
			max = a;
		}
	}
	printf("%d %d", max, count);
	return 0;
}