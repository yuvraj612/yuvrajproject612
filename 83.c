#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    float x, y;

    x = a / b;
    y = (float)(a / b);

    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}