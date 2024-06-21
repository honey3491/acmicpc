#include <iostream>
#include <cstring>
#include <istream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	while (1)
	{
		string str;
		bool t = true;

		stack<char>s;

		getline(cin, str);

		if (str.length() == 1 || str[0] == '.') {
			break;
		}
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			if (str[i] == ')')
			{
				if (s.empty() || s.top() != '(') {
					t = false;
					break;
				}
				else
					s.pop();
			}
			if (str[i] == ']')
			{
				if (s.empty() || s.top() != '[') {
					t = false;
					break;
				}
				else
					s.pop();
			}
		}
		if (t && s.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}
}
