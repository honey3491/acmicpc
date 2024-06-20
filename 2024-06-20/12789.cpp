#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool success = true;
	vector <int> side;
	int N, x;
	int num = 1;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == num)
			num++;
		else {
			while (!(side.empty())) {
				if (side.back() == num)
				{
					side.pop_back();
					num++;
				}
				else
					break;
			}
			side.push_back(x);
		}
	}
	int size = side.size();

	for (int i = 0; i < size; i++)
	{
		if (side.back() == num)
		{
			side.pop_back();
			num++;
		}
		else
			break;
	}
	if (side.empty())
		cout << "Nice";
	else
		cout << "Sad";
}