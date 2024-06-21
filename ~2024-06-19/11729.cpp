#include <stdio.h>
#include <math.h>

void hanoi(int num, int from, int by, int to)
{
	if (num == 1)
	{
		printf("%d %d\n", from, to);
	}
	else
	{
		hanoi(num - 1, from, to, by);
		printf("%d %d\n", from, to);
		hanoi(num - 1, by, from, to);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", int(pow(2, n) - 1));
	hanoi(n, 1, 2, 3);
}