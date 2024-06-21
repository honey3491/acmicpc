#include <iostream>

using namespace std;

int main()
{
	int i, j, num, n1, n2, t1[100], t2[100], star1, star2, cir1, cir2, rec1, rec2;
	char a[100];
	cin >> num;
	for (i = 0; i < num; i++)
	{
		star1 = star2 = cir1 = cir2 = rec1 = rec2 = 0;
		cin >> n1;
		for (j = 0; j < n1; j++) {
			cin >> t1[j];
			if (t1[j] == 4)
				star1++;
			if (t1[j] == 3)
				cir1++;
			if (t1[j] == 2)
				rec1++;
		}
		cin >> n2;
		for (j = 0; j < n2; j++) {
			cin >> t2[j];
			if (t2[j] == 4)
				star2++;
			if (t2[j] == 3)
				cir2++;
			if (t2[j] == 2)
				rec2++;
		}
		if (star1 > star2)
			a[i] = 'A';
		else if (star1 < star2)
			a[i] = 'B';
		else if (cir1 > cir2)
			a[i] = 'A';
		else if (cir1 < cir2)
			a[i] = 'B';
		else if (rec1 > rec2)
			a[i] = 'A';
		else if (rec1 < rec2)
			a[i] = 'B';
		else if (n1 > n2)
			a[i] = 'A';
		else if (n1 < n2)
			a[i] = 'B';
		else
			a[i] = 'D';
		cout << a[i] << endl;
	}
}