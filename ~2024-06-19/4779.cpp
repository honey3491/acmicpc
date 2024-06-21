#include <iostream>
#include <cmath>

using namespace std;

void line(int start, int end, bool n)
{
    int size = (end - start + 1) / 3;
    if (end - start + 1 == 3)
    {
        if (n)
            cout << "- -";
        else
            cout << "   ";
    }
    else if (n) {
        line(start, start + size - 1, 1);
        line(start + size, start + size + size - 1, 0);
        line(start + size + size, end, 1);
    }
    else
    {
        line(start, start + size - 1, 0);
        line(start + size, start + size + size - 1, 0);
        line(start + size + size, end, 0);
    }
}

int main() {
    int num;
    while (1)
    {
        cin >> num;
        if (cin.eof())
            break;
        if (num == 0) {
            cout << "-";
        }
        else
        {
            int len = pow(3, num - 1) * 3;
            line(1, len, 1);
        }
        cout << "\n";
    }
}
