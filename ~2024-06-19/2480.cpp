#include <stdio.h>

int main()
{
	int dice1, dice2, dice3, price;
	scanf("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3)
	{
		price = 10000 + 1000 * dice1;
	}
	else if (dice1 == dice2 || dice2 == dice3 || dice3 == dice1)
	{
		price = 1000 + ((dice1 == dice2) * dice1 + (dice2 == dice3) * dice2 + (dice1 == dice3) * dice3) * 100;
	}
	else
	{
		int max = dice1;
		if (max < dice2)
			max = dice2;
		if (max < dice3)
			max = dice3;
		price = max * 100;
	}
	printf("%d", price);
}