#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char string[50];
		int top1 = 0, top2 = 0, t = 1, j = 0;
		scanf("%s", string);
		while (string[j] != '\0')
		{
			if (string[j++] == '(')
				top1++;
			else
				top2++;
			if (top1 < top2)
			{
				t = 0;
			}
		}
		if (top1 != top2)
			t = 0;
		if (t == 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
}