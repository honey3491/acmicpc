#include <iostream>
#include <math.h>

#define max_size 500000
using namespace std;

int main()
{
	int min = max_size, max = -max_size;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}

	cout << min * max;
}