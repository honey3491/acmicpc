#include <stdio.h>

int main()
{
	int count = 0, n, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (2 <= num) {
			for (int j = 2; j <= num; j++)
			{
				if (num == j)
					count++;
				if (num % j == 0)
					break;
			}
		}
	}
	printf("%d", count);
}