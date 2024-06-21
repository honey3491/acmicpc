#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int T, N;
string order, arr;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> T;
	for (int k = 0; k < T; k++) {
		cin >> order; cin >> N; cin >> arr;
		deque<int> dq;
		bool dir = true;
		bool flag = true;
		string temp = "";
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] == ',' || arr[i] == ']') {
				if (temp != "") dq.push_back(stoi(temp));
				temp = "";
			}
			else temp += arr[i];
		}

		for (int i = 0; i < order.size(); i++) {
			if (order[i] == 'R') {
				dir = !dir;
			}
			else if (order[i] == 'D') {
				if (dq.empty()) {
					flag = false;
					break;
				}
				else {
					if (dir) dq.pop_front();
					else dq.pop_back();
				}
			}
		}
		if (!flag) cout << "error" << endl;
		else {
			if (!dir) reverse(dq.begin(), dq.end());
			cout << "[";
			for (int i = 0; i < dq.size(); i++) {
				if (i == dq.size() - 1) cout << dq[i];
				else cout << dq[i] << ",";
			}
			cout << "]" << endl;
		}
	}
}