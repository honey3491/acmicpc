#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int>s;
	char result[100000];
	int n, num[100000], t = 0, a = 1, top = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	while (t != n)
	{
		if (s.empty() || s.top() < num[t])
		{
			s.push(a++);
			result[top++] = '+';
		}
		else if (s.top() == num[t])
		{
			s.pop();
			result[top++] = '-';
			t++;
		}
		else
		{
			cout << "NO\n";
			return 0;
		}
	}
	for (int i = 0; i < top; i++)
		cout << result[i] << "\n";
}
