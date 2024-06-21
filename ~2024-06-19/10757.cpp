#include <stdio.h>
#include <string.h>

void reverse(char arr[])
{
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}
int main()
{
	char a[10002] = { 0 }, b[10002] = { 0 }, result[10003] = { 0 };
	scanf("%s %s", a, b);

	int i = 0, carry = 0, len = 0;

	reverse(a);
	reverse(b);

	if (strlen(a) > strlen(b))
	{
		len = strlen(a);
	}
	else
	{
		len = strlen(b);
	}

	for (i = 0; i < len; i++)
	{
		int sum = a[i] - '0' + b[i] - '0' + carry;
		if (sum < 0)
		{
			sum += '0';
		}
		if (sum > 9)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		result[i] = sum % 10 + '0';
	}
	if (carry == 1)
	{
		result[len] = '1';
	}
	reverse(result);
	printf("%s", result);
	return 0;
}