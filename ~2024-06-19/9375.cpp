#include <iostream>
#include <string>

using namespace std;
struct cloth {
	int count = 1;
	string type;
};

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num, type_num = 0, result = 1;
		cin >> num;
		string cloth_name[101];
		cloth cloth_type[101];
		for (int j = 0; j < num; j++)
		{
			string temp;
			cin >> cloth_name[j] >> temp;
			if (type_num == 0)
			{
				cloth_type[type_num++].type = temp;
			}
			else
			{
				bool t = true;
				for (int k = 0; k < type_num; k++)
				{
					if (cloth_type[k].type == temp)
					{
						cloth_type[k].count++;
						t = false;
						break;
					}
				}
				if (t)
					cloth_type[type_num++].type = temp;
			}
		}
		for (int j = 0; j < type_num; j++)
			result *= (cloth_type[j].count + 1);
		cout << result - 1 << "\n";
	}
}