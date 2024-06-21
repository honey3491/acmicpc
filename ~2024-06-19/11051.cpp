#include <iostream>

using namespace std;

int num[1001][1001];

int main()
{
	int n, k;

	cin >> n >> k;
	num[1][0] = 1;
	num[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		num[i][0] = 1;
		for (int j = 1; j < i; j++) {
			num[i][j] = (num[i - 1][j - 1] + num[i - 1][j]) % 10007;
		}
		num[i][i] = 1;
	}
	cout << num[n][k];
}