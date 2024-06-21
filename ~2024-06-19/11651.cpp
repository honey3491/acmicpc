#include<stdio.h>
#include <stdlib.h>

typedef struct num {
    int x;
    int y;
};

struct num num[100000], temp, sort[100000];

void merge(int first, int mid, int last)
{
    int i, j, k;
    i = first;
    j = mid + 1;
    k = first;

    while (i <= mid && j <= last) {
        if (num[i].y < num[j].y)
            sort[k++] = num[i++];
        else if (num[i].y > num[j].y)
            sort[k++] = num[j++];
        else {
            if (num[i].x < num[j].x)
                sort[k++] = num[i++];
            else if (num[i].x > num[j].x)
                sort[k++] = num[j++];
        }
    }

    if (i <= mid) {
        while (i <= mid)
            sort[k++] = num[i++];
    }
    else {
        while (j <= last)
            sort[k++] = num[j++];
    }
    for (k = first; k <= last; k++)
        num[k] = sort[k];
}

void mergesort(int first, int last) {
    int mid;
    if (first < last) {
        mid = (first + last) / 2;
        mergesort(first, mid);
        mergesort(mid + 1, last);
        merge(first, mid, last);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num[i].x, &num[i].y);
    }
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", num[i].x, num[i].y);
    }
}