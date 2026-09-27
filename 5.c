#include <stdio.h>
int main ()
{
    int a,b,modulus;
    
    printf("enter two numbers:");
    scanf("%d %d, &a,&b ");

    modulus = a%b ;
    printf("product=%d" , modulus );
    return 0 ;
}