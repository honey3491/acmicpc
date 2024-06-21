#include <stdio.h>

int main(void)
{
    int a, b, c, i;
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        scanf("%d ", &c);
        if (b > c)
            printf("%d ", c);
    }
    return 0;
}