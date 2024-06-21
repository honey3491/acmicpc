#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n, k;

long long division(int dividend, int divisor)
{
	int count = 0;

	for (long long i = divisor; dividend / i >= 1; i *= divisor) {
		count += dividend / i;
	}

	return count;
}

int main()
{
	cin >> n >> k;

	int five = 0, two = 0;
	five = division(n, 5) - division(n - k, 5) - division(k, 5);
	two = division(n, 2) - division(n - k, 2) - division(k, 2);

	cout << min(five, two) << "\n";
}