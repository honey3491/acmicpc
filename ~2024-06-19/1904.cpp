#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> answer = { 0,1,2 };

void fibo()
{
    int temp;
    for (int i = 3; i <= n; i++)
    {
        temp = 0;
        temp = answer[i - 1] + answer[i - 2];
        answer.push_back(temp % 15746);
    }
};

int main()
{
    cin >> n;
    fibo();
    cout << answer[n];
}