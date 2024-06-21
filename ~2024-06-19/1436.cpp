#include <stdio.h>
#include <stdio.h>

int main()
{
	int n, count = 0, num = 665;
	scanf("%d", &n);

	while (1)
	{
		for (int i = num; i > 665; i /= 10)
		{
			if (i % 1000 == 666) {
				count++;
				break;
			}
		}
		if (count == n) {
			printf("%d\n", num);
			return 0;
		}
		num++;
	}

}