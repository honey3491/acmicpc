#include <iostream>

using namespace std;

int main()
{
	int a, b, c, count = -1;

	cin >> a >> b >> c;
	if (b >= c)
		cout << count;
	else
	{
		count = a / (c - b) + 1;
		cout << count;
	}
	return 0;
}