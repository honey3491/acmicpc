#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	deque <int>deq;
	int N, X, cmd;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;
		switch (cmd)
		{
		case 1:
			cin >> X;
			deq.push_front(X);
			break;
		case 2:
			cin >> X;
			deq.push_back(X);
			break;
		case 3:
			if (deq.empty())
				cout << "-1\n";
			else {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			break;
		case 4:
			if (deq.empty())
				cout << "-1\n";
			else {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			break;
		case 5:
			cout << deq.size() << "\n";
			break;
		case 6:
			cout << deq.empty() << "\n";
			break;
		case 7:
			if (deq.empty())
				cout << "-1\n";
			else 
				cout << deq.front() << "\n";
			break;
		case 8:
			if (deq.empty())
				cout << "-1\n";
			else
				cout << deq.back() << "\n";
			break;
		}
	}
	return 0;
}