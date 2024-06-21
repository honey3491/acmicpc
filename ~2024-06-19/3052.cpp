#include <stdio.h>

int main(void)
{
	int a, i, count = 0, b[42] = { 0, };

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);

		a %= 42;

		if (b[a] == 0)
		{
			count += 1;
			b[a] = 1;
		}
	}
	printf("%d", count);
	return 0;
}