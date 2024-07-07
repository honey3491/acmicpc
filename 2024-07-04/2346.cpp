#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, tmp = 0, visit[1000] = { 0, };
	cin >> N;
	deque <pair<int,int>> input;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		input.push_back(make_pair(i+1, M));
	}

	while (!input.empty())
	{
		tmp = input.front().second;
		cout << input[0].first << " ";
		input.pop_front();

		if (input.empty())
			break;
		if (tmp > 0)
		{
			for (int i = 0; i < tmp - 1; i++)
			{
				input.push_back(input.front());
				input.pop_front();
			}
		}
		else
			for (int i = 0; i < -tmp; i++)
			{
				input.push_front(input.back());
				input.pop_back();
			}
	}
	
}