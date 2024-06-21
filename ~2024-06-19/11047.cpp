#include <iostream>
#include <vector>
using namespace std;

int coin_count = 0;

int calc(int money, int coin)
{
	while (money - coin >= 0) {
		money -= coin;
		coin_count++;
	}
	return money;
};

int main()
{
	int n, cost;

	cin >> n >> cost;

	vector<int> coin(n);

	for (int i = 0; i < n; i++)
		cin >> coin[i];

	for (int i = n - 1; i >= 0; i--) {
		if (cost != 0)
			cost = calc(cost, coin[i]);
	}

	cout << coin_count << "\n";

	return 0;
}