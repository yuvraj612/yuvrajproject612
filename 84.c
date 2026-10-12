#include <stdio.h>

int main()
{
    int obtained = 427;
    int total = 500;
    float percentage;

    percentage = (float)obtained / total * 100;

    printf("Percentage = %f", percentage);

    return 0;
}