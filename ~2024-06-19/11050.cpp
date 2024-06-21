#include <iostream>

using namespace std;

int factorial(int a)
{

	if (a <= 1)
		return 1;
	else
		return a * factorial(a - 1);
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << factorial(n) / factorial(n - k) / factorial(k);
}