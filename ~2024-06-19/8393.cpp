#include <stdio.h>

int main(void)
{
    int a, i, sum = 0;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}