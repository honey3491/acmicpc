#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int r;
	scanf("%d", &r);
	printf("%lf\n%lf", r * r * M_PI, 2.0 * r * r);
}