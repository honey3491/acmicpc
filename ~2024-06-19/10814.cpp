#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct customer
{
	int age, id;
	string name;
};

customer information[100001], temp[100001];

void merge(int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (information[i].age > information[j].age)
			temp[k++] = information[j++];
		else if (information[i].age < information[j].age)
			temp[k++] = information[i++];
		else
		{
			if (information[i].id > information[j].id)
				temp[k++] = information[j++];
			else
				temp[k++] = information[i++];
		}
	}

	if (i > mid)
	{
		while (j <= right)
			temp[k++] = information[j++];
	}

	else
	{
		while (i <= mid)
			temp[k++] = information[i++];
	}

	for (int a = left; a <= right; a++)
		information[a] = temp[a];
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

	for (int i = 0; i < n; i++) {
		cin >> information[i].age >> information[i].name;
		information[i].id = i;
	}

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << information[i].age << " " << information[i].name << "\n";
	}
}