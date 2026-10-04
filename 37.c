#include <stdio.h>
int main()
{
    int n,num,sum=0;

    printf("how many numbers?");
    scanf("%d",&n);

    for( int i=1; i<=n; i++ ) 
    {
    printf("enter number %d:",i);
    scanf("%d",&num);

    sum=sum+num;
    }
 printf("sum=%d",sum);  
 return 0;
}
