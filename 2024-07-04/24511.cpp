#include <iostream>
#include <queue>
#include <stack>
using namespace std;

stack <int> input;
queue <int> q;
int N, M;
bool type[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> type[i];
	}

	for (int i = 0; i < N; i++)
	{
		int b;
		cin >> b;
		if (type[i] == 0)
			input.push(b);
	}

	while (!input.empty())
	{
		q.push(input.top());
		input.pop();
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int b;
		cin >> b;
		q.push(b);
		cout << q.front() << " ";
		q.pop();
	}
}