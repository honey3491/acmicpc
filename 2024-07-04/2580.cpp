#include <iostream>
#include <vector>
using namespace std;

int  result[9][9], L;
vector <pair<int, int>> v;

bool isend = false;

bool check(int a, int b, int value)
{
	for (int i = 0; i < 9; i++)
	{
		if (result[i][b] == value) return false;
		if (result[a][i] == value) return false;
	}

	int x_in = a / 3;
	int y_in = b / 3;
	x_in *= 3;
	y_in *= 3;
	for (int i = x_in; i < x_in + 3; i++)
	{
		for (int j = y_in; j < y_in + 3; j++)
		{
			if (result[i][j] == value) return false;
		}
	}

	return true;
}

void DFS(int cur)
{
	if (isend == true) return;
	if (cur == L)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << result[i][j] << " ";
			}
			cout << '\n';
		}
		isend = true;
	}
	else 
	{
		int x = v[cur].first;
		int y = v[cur].second;
		for (int i = 1; i <= 9; i++)
		{
			if (check(x, y, i))
			{
				result[x][y] = i;
				DFS(cur + 1);
				result[x][y] = 0;
			}
		}
	}
}

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> result[i][j];
			if (result[i][j] == 0)
			{
				v.push_back({ i, j });
			}
		}
	}
	L = v.size();
	DFS(0);
}