#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	for (int i = 2 * a - 1; i > 0; i -= 2)
	{
		for (int j = 2 * a - 1; j > i; j -= 2)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 2 * a - 1; i > 1; i -= 2)
	{
		for (int j = 3; j < i; j += 2)
			printf(" ");
		for (int j = 2 * a + 2; j > i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}