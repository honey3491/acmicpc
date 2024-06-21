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
	int n, num[100], arr[100], count = 0, a, b;
	cin >> n;

	cin >> a;
	for (int i = 1; i < n; i++)
	{
		cin >> b;
		int c = gcd(a, b);
		cout << a / c << "/" << b / c << "\n";
	}
}