#include <stdio.h>
int main()
{
    int num,a,b,c;
    printf("enter a three digit number:");
    scanf("%d", &num);

    a= num / 100;
    b= (num / 10) % 10;
    c= num % 10;

    printf("Reverse %d%d%d" , c,b,a);
    return 0;
}
