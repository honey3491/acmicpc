#include <stdio.h>

int main(void)
{
	int a, i, j;
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (j % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		for (j = 0; j < a; j++)
		{
			if (j % 2 == 0)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}