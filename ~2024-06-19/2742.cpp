#include <stdio.h>

int main(void)
{
    int a, i;
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
        printf("%d\n", i);
    return 0;
}