#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main()
{
	int n, num[1000001], arr[1000001], count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	int m = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
		m = gcd(m, arr[i] - arr[i - 1]);

	for (int i = 1; i * i <= m; i++)
	{
		if (m % i == 0)
		{
			num[count++] = i;
			if (i != m / i) num[count++] = m / i;
		}
	}

	sort(num, num + count);

	for (int i = 0; i < count; i++)
	{
		if (num[i] != 1)
			cout << num[i] << " ";
	}

}