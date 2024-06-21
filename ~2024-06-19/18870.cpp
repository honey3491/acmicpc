#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;

	cin >> n;
	vector<int>num(n);
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	vector<int> temp(num);
	sort(temp.begin(), temp.end());
	temp.erase(unique(temp.begin(), temp.end()), temp.end());

	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(temp.begin(), temp.end(), num[i]);
		cout << it - temp.begin() << " ";
	}
}