#include <stdio.h>
int main()
{
    int numbers[5];
    int i,search,found=0;
    printf("Enter five numbers:");

    for(i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Enter a number to search:");
    scanf("%d",&search);

    for(i=0;i<5;i++){
        if(numbers[i]==search){
            found=1;
        }
    }
    if(found==1){
        printf("Number found");
    } else{
        printf("Number not found");
    }
    return 0 ;
}