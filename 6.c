#include <stdio.h>
//celcius to fahrenheit
int main ()
{
    float celcius,fahrenheit;

    printf("enter temperature in celcius:");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius * 9/5) + 32 ;
     
    printf("temperature in fahrenheit=%.2f", fahrenheit);
    return 0; 
}