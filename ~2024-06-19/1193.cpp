#include <iostream>

using namespace std;

int main()
{
	int c = 1, r = 1, num = 1, input, way = 1;
	cin >> input;

	while (num != input)
	{
		if (way == 1)
		{
			if (c == 1)
			{
				way = 0;
				r++;
			}
			else
			{
				r++;
				c--;
			}
		}
		else
		{
			if (r == 1)
			{
				way = 1;
				c++;
			}
			else
			{
				r--;
				c++;
			}
		}
		num++;
	}
	cout << c << "/" << r;
	return 0;
}