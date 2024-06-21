#include <stdio.h>

int main(void)
{
    int a, i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        if (a <= 40)
            a = 40;
        sum += a;
    }
    printf("%d", sum / 5);
    return 0;
}