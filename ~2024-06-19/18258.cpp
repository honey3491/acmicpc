#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, a;
	queue<int> q;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string order;
		cin >> order;
		if (!order.compare("push"))
		{
			cin >> a;
			q.push(a);
		}
		else if (!order.compare("pop"))
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (!order.compare("size"))
		{
			cout << q.size() << "\n";
		}
		else if (!order.compare("front"))
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		}
		else if (!order.compare("back"))
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
		else if (!order.compare("empty"))
		{
			cout << q.empty() << "\n";
		}
		else;
	}
}
