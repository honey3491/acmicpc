#include <stdio.h>

int main()
{
	int num[100000], i, n, top = 0, number, sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &number);
		if (number == 0)
		{
			top--;
		}
		else
		{
			num[top++] = number;
		}
	}
	for (i = 0; i < top; i++)
		sum += num[i];
	printf("%d\n", sum);
}