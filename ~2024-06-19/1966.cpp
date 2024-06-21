#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, a, b, tmp;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		vector<int> q;
		queue<int> check;
		cin >> a >> b;
		int num = 0;
		for (int j = 0; j < a; j++)
		{
			int num;
			cin >> num;
			q.push_back(num);
			if (j == b) check.push(1);
			else check.push(0);
		}


		while (1)
		{
			int max = *max_element(q.begin(), q.end());
			if (max == q.front())
			{
				num++;
				if (check.front() == 1)
				{
					cout << num << "\n";
					break;
				}
				else
				{
					q.erase(q.begin());
					check.pop();
				}
			}
			else
			{
				tmp = *q.begin();
				q.erase(q.begin());
				q.push_back(tmp);
				tmp = check.front();
				check.pop();
				check.push(tmp);
			}
		}
	}
}
