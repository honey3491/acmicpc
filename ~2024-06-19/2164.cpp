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

	for (int i = 1; i <= n; i++)
		q.push(i);
	while (q.size() != 1)
	{
		q.pop();
		a = q.front();
		q.pop();
		q.push(a);
	}
	cout << q.front();
}
