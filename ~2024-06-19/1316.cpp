#include <stdio.h>

int main()
{
	int a, count = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int  alpha[26] = { 0, }, t = 1, n = 0;
		char word[100];
		scanf("%s", word);
		while (word[n] != '\0')
		{
			if (n == 0) {
				alpha[int(word[n] - 'a')] = 1;
				n++;
			}
			else
			{
				if (alpha[int(word[n] - 'a')] == 0 || word[n - 1] == word[n])
				{
					alpha[int(word[n] - 'a')] = 1;
					n++;
				}
				else
				{
					t = 0;
					break;
				}
			}
		}
		if (t == 1)
			count++;
	}
	printf("%d", count);
}