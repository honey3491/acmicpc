#include <stdio.h>

int main(void)
{
	int a, c, count, score[1000] = { 0, };
	double avg, ova;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &c);
		avg = 0;
		count = 0;
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &score[j]);
			avg += score[j];
		}
		avg /= c;
		for (int j = 0; j < c; j++)
		{
			if (score[j] > avg)
				count += 1;
		}
		ova = (double)count / (double)c * 100;
		printf("%.3lf%%\n", ova);
	}
	return 0;
}