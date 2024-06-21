#include <stdio.h>

int main()
{
	char str[100];
	int n = 0, count = 0;
	scanf("%s", str);
	while (str[n] != NULL)
	{
		if (str[n] == 'c' && str[n + 1] == '=') {
			n += 2;
			count++;
		}
		else if (str[n] == 'c' && str[n + 1] == '-') {
			n += 2;
			count++;
		}
		else if (str[n] == 'd' && str[n + 1] == 'z' && str[n + 2] == '=') {
			n += 3;
			count++;
		}
		else if (str[n] == 'd' && str[n + 1] == '-') {
			n += 2;
			count++;
		}
		else if (str[n] == 'l' && str[n + 1] == 'j') {
			n += 2;
			count++;
		}
		else if (str[n] == 'n' && str[n + 1] == 'j') {
			n += 2;
			count++;
		}
		else if (str[n] == 's' && str[n + 1] == '=') {
			n += 2;
			count++;
		}
		else if (str[n] == 'z' && str[n + 1] == '=') {
			n += 2;
			count++;
		}
		else
		{
			n++;
			count++;
		}
	}
	printf("%d", count);
}