#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b, sum;
	char c[80];

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		b = 0;
		sum = 0;
		scanf("%s", c);
		for (int j = 0; j < strlen(c); j++)
		{
			if (c[j] == 'O')
			{
				b += 1;
				sum += b;
			}
			else
				b = 0;
		}
		printf("%d\n", sum);
	}
	return 0;
}