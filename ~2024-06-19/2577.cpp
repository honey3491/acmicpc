#include <stdio.h>

int main(void)
{
	int a, b, c, sum, d[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, result, i;

	scanf("%d %d %d", &a, &b, &c);

	sum = a * b * c;
	do
	{
		result = sum % 10;
		switch (result)
		{
		case 0:
			d[0] += 1;
			break;
		case 1:
			d[1] += 1;
			break;
		case 2:
			d[2] += 1;
			break;
		case 3:
			d[3] += 1;
			break;
		case 4:
			d[4] += 1;
			break;
		case 5:
			d[5] += 1;
			break;
		case 6:
			d[6] += 1;
			break;
		case 7:
			d[7] += 1;
			break;
		case 8:
			d[8] += 1;
			break;
		case 9:
			d[9] += 1;
			break;
		}
		sum /= 10;
	} while (sum != 0);

	for (i = 0; i <= 9; i++)
		printf("%d\n", d[i]);
	return 0;
}