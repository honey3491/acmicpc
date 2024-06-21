#include <iostream>
#include <vector>

using namespace std;

vector<int>A;
int cnt = 0, K, num = -1;
void merge(int p, int q, int r) {
    int i = p; int j = q + 1; int t = 1;
    int tmp[A.size()];
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r) {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == K)
            num = A[i - 1];
    }
}

void merge_sort(int p, int r)
{
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    int N;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    merge_sort(0, N - 1);
    cout << num;
}