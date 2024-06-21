#include <iostream>

using namespace std;

int route(int n);

int main()
{
	int count = 1;
	int input;

	cin >> input;
	cout << route(input);

	return 0;
}

int route(int n)
{
	int i, max = 1;
	for (i = 1; i != 0; i++)
	{
		if (max >= n)
			return i;
		else
			max += i * 6;
	}
}