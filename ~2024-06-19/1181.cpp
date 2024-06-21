#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string word[20001], temp[20001];

void merge(int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (word[i].length() > word[j].length())
			temp[k++] = word[j++];
		else if (word[i].length() < word[j].length())
			temp[k++] = word[i++];
		else
		{
			if (word[i].compare(word[j]) > 0)
				temp[k++] = word[j++];
			else
				temp[k++] = word[i++];
		}
	}

	if (i > mid)
	{
		while (j <= right)
			temp[k++] = word[j++];
	}

	else
	{
		while (i <= mid)
			temp[k++] = word[i++];
	}

	for (int a = left; a <= right; a++)
		word[a] = temp[a];
}
void merge_sort(int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, mid, right);
	}
}
int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> word[i];

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		if (word[i].compare(word[i - 1]) != 0)
			cout << word[i] << "\n";
	}
}