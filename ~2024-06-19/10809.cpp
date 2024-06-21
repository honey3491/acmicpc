#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[100];
	cin >> s;
	for (int i = 0; i < 26; i++)
	{
		int tf = 0;
		for (int j = 0; j < strlen(s); j++)
		{
			if ('a' + i == s[j])
			{
				cout << j << " ";
				tf = 1;
				break;
			}
		}
		if (tf == 0) {
			cout << "-1 ";
		}
	}
	return 0;
}