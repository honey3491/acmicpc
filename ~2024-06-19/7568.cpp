#include <stdio.h>

int main()
{
	int human[100][2], number, rank = 1;
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d %d", &human[i][0], &human[i][1]);
	}
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (human[i][0] < human[j][0] && human[i][1] < human[j][1])
				rank++;
		}
		printf("%d ", rank);
		rank = 1;
	}
}