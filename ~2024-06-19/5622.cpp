#include <iostream>
#include <string>

using namespace std;

int time_calc(char c);

int main()
{
	int time = 0;
	string s;
	getline(cin, s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		time += time_calc(s[i]);
	}
	cout << time;
}

int time_calc(char c)
{
	if (c >= 'A' && c <= 'C')
		return 3;
	else if (c >= 'D' && c <= 'F')
		return 4;
	else if (c >= 'G' && c <= 'I')
		return 5;
	else if (c >= 'J' && c <= 'L')
		return 6;
	else if (c >= 'M' && c <= 'O')
		return 7;
	else if (c >= 'P' && c <= 'S')
		return 8;
	else if (c >= 'T' && c <= 'V')
		return 9;
	else if (c >= 'X' && c <= 'Z')
		return 10;
}