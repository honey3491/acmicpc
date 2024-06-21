#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, a, k;
	queue<int> q;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (q.size() != 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			a = q.front();
			q.pop();
			q.push(a);
		}
		a = q.front();
		cout << a << ", ";
		q.pop();
	}
	cout << q.front() << ">";
}
