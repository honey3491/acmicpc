#include <stdio.h>

int main(void)
{
    int a, i, min1 = 2000, min2 = 2000;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        if (a < min1)
            min1 = a;
    }
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &a);
        if (a < min2)
            min2 = a;
    }
    printf("%d", min1 + min2 - 50);
    return 0;
}