#include <stdio.h>
int main ()
{
    int a,b;
    char op;
     
    printf("enter two number:");
    scanf("%d %d",&a,&b);

    printf("enter operator(+,-,*,/):");
    scanf(" %c",&op);

    switch(op){
        case '+':
        printf("Answer = %d", a+b);
        break;

        case'-':
        printf("Answer = %d",a-b);
        break;

        case'*':
        printf("Answer = %d", a*b);
        break;

        case'/':
        printf("Answer= %d",a/b);
        break;
    }
    return 0;
}