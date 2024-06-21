#include<stdio.h>

int main()
{
	int num[10] = { 0, }, n;
	scanf("%d", &n);
	while (n != 0)
	{
		num[n % 10]++;
		n /= 10;
	}
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < num[i]; j++)
			printf("%d", i);
	}
}