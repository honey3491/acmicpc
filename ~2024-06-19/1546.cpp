#include <stdio.h>

int main(void)
{
	double a, sum = 0, count, max = 0;

	scanf("%lf", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%lf", &a);
		if (a > max)
			max = a;
		sum += a;
	}
	printf("%lf", sum / max * 100 / count);
	return 0;
}