#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[20];
	int t, r;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> r;
		cin >> s;
		for (int j = 0; j < strlen(s); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
}