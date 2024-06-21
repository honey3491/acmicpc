#include <iostream>

using namespace std;

int num[1001][1001];

int main()
{
	int count, n, k;

	cin >> count;
	num[1][0] = 1;
	num[1][1] = 1;
	for (int l = 0; l < count; l++)
	{
		cin >> n >> k;
		if (n < k)
		{
			int temp = n;
			n = k;
			k = temp;
		}
		for (int i = 2; i <= n; i++)
		{
			num[i][0] = 1;
			for (int j = 1; j < i; j++) {
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
			}
			num[i][i] = 1;
		}
		cout << num[n][k] << "\n";
	}
}