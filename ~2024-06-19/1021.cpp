#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int size, n, a, order[50], result = 0;
	deque<int> q;
	cin >> size >> n;

	for (int i = 1; i <= size; i++) q.push_back(i);
	for (int i = 0; i < n; i++) cin >> order[i];

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		//cout << order[i] << " : ";
		if (order[i] == q.front()) q.pop_front();
		else
		{
			do
			{
				//cout << q.front() << " ";
				int a = q.front();
				q.pop_front();
				q.push_back(a);
				count++;
			} while (order[i] != q.front());
			//cout << "out ";
			if (q.size() > count * 2) result += count;
			else result += (q.size() - count);
			q.pop_front();
		}
		//cout << result << endl;
	}
	cout << result;
}
