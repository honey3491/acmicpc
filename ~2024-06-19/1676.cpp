#include <iostream>

using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 5; i <= n; i += 5)
	{
		int dividend = i;

		while (dividend % 5 == 0)
		{
			dividend /= 5;
			count++;
		}
	}

	cout << count;
}