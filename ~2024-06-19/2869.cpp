#include <iostream>

using namespace std;

int main()
{
	long long day, up, down, goal;
	cin >> up;
	cin >> down;
	cin >> goal;

	if (up == goal) {
		cout << "1";
		return 0;
	}
	else
	{
		day = (goal - up) / (up - down);
		if ((goal - up) % (up - down) == 0)
			day += 1;
		else
			day += 2;
	}
	cout << day;
	return 0;
}