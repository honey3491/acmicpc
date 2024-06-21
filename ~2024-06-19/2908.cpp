#include <iostream>

using namespace std;

int reverse(int s);

int main()
{
	int a, b, ar, br;
	cin >> a;
	cin >> b;
	ar = reverse(a);
	br = reverse(b);

	if (ar > br)
		cout << ar;
	else
		cout << br;
	return 0;
}

int reverse(int s)
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum *= 10;
		sum += s % 10;
		s /= 10;
	}
	return sum;
}