#include <stdio.h>

int main(void)
{
    int a, i, j;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        for (j = a - 1; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}