#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= 7; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}