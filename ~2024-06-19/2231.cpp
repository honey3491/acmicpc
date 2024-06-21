#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			for (int c = 0; c < 10; c++)
			{
				for (int d = 0; d < 10; d++)
				{
					for (int e = 0; e < 10; e++)
					{
						for (int f = 0; f < 10; f++)
						{
							if (n == f * 2 + e * 11 + d * 101 + c * 1001 + b * 10001 + a * 100001) {
								printf("%d\n", a * 100000 + b * 10000 + c * 1000 + d * 100 + e * 10 + f);
								return 0;
							}
						}
					}
				}
			}
		}
	}
	printf("0\n");
}