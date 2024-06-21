#include <stdio.h>

int main()
{
	int hour, minute, time;
	scanf("%d %d", &hour, &minute);
	scanf("%d", &time);

	minute += time;
	while (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
	if (hour >= 24)
		hour -= 24;
	printf("%d %d", hour, minute);

}