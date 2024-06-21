#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int min = x;
	if (min > y)
		min = y;
	if (min > abs(x - w))
		min = abs(x - w);
	if (min > abs(y - h))
		min = abs(y - h);
	printf("%d\n", min);
}