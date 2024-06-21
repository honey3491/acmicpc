#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, a;
	deque<int> q;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string order;
		cin >> order;
		if (!order.compare("push_front"))
		{
			cin >> a;
			q.push_front(a);
		}
		else if (!order.compare("push_back"))
		{
			cin >> a;
			q.push_back(a);
		}
		else if (!order.compare("pop_front"))
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				cout << q.front() << "\n";
				q.pop_front();
			}
		}
		else if (!order.compare("pop_back"))
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				cout << q.back() << "\n";
				q.pop_back();
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
