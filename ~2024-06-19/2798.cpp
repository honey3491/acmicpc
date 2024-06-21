#include <iostream>

using namespace std;

int main()
{
	int n, m, card[100], max = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int sum = card[i] + card[j] + card[k];
				if (max < sum && m >= sum)
					max = sum;
			}
		}
	}
	cout << max;
}