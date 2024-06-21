#include <stdio.h>
#include <math.h>
int main()
{
	int num[8001] = { 0, }, N, min = 4001, max = -4001, s, mid, s_vin = 0, s_vin_num, s_vin_count = 0, i, j, sum = 0, gap;
	double avg;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &s);
		sum += s;
		num[s + 4000]++;
		if (min > s)
			min = s;
		if (max < s)
			max = s;
		if (num[s + 4000] > s_vin)
			s_vin = num[s + 4000];
	}
	gap = max - min;
	avg = round(sum / double(N));
	if (avg == -0)
	{
		avg = 0;
	}
	i = 0;
	for (j = 0; j < 8001; j++)
	{
		if (s_vin == num[j] && s_vin_count < 2)
		{
			s_vin_num = j - 4000;
			s_vin_count++;
		}
	}
	for (j = 0; j < 8001; j++)
	{
		if (num[j] != 0)
		{
			i = i + num[j];
			if (i >= N / 2 + 1) {
				mid = j - 4000;
				break;
			}
		}
	}
	printf("%.0lf\n%d\n%d\n%d", avg, mid, s_vin_num, gap);
}