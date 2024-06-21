#include <iostream>

using namespace std;

int a, b;

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main()
{
	int ans1, ans2, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (a > b)
			ans1 = gcd(a, b);
		else
			ans1 = gcd(b, a);

		ans2 = a * b / ans1;

		cout << ans2 << "\n";

	}
}