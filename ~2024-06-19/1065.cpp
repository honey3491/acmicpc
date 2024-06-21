#include <iostream>

using namespace std;

int calc(int n);

int main()
{
	int a, count = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		count += calc(i);
	}
	cout << count;
	return 0;
}

int calc(int n)
{
	if (n < 100)
		return 1;
	if (n / 100 + n % 10 == 2 * (n % 100 / 10)) {
		return 1;
	}
	return 0;
}
