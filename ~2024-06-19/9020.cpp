#include <stdio.h>

int prime(int n)
{
	int t = 1;
	if (n < 2)
		t = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			t = 0;
	}
	return t;
}

int gold(int num)
{
	int a, b;
	a = b = num / 2;
	while (1) {
		if (prime(a) == 1 && prime(b) == 1)
			return a;
		else {
			a--; b++;
		}
	}
}
int main()
{
	int a, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		printf("%d %d\n", gold(a), a - gold(a));
	}

}