#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	vector<int> v;

	int N, M, j, k;

	cin >> N >> M;

	int sum = 0;
	v.push_back(0);

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num + v[i]);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> j >> k;
		cout << v[k] - v[j - 1] << "\n";
	}
}