#include <stdio.h>

int main(void)
{
    int a, b, c, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d + %d = %d\n", i, b, c, b + c);
    }
    return 0;
}