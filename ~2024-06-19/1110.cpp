#include <stdio.h>

int main(void)
{
    int a, b, c, tmp, count = 0;
    scanf("%d", &c);
    a = c / 10;
    b = c % 10;
    do
    {
        tmp = a;
        a = b;
        b = (tmp + b) % 10;
        count++;
    } while (a * 10 + b != c);
    printf("%d", count);
    return 0;
}