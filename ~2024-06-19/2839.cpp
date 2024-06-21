#include <stdio.h>


int main()
{
	int weight, count = 0;
	scanf("%d", &weight);
	while (1)
	{
		if (weight < 0)
		{
			printf("-1");
			break;
		}
		if (weight % 5 == 0) {
			count += (weight / 5);
			printf("%d", count);
			break;
		}
		else
		{
			weight -= 3;
			count++;
		}
	}
}