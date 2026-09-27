#include <stdio.h>
//fahrenheit to celcius

int main ()
{
    float celcius,fahrenheit;

    printf("enter temperature in fahrenheit:");
    scanf("%f", &fahrenheit);
    
    celcius = (fahrenheit - 32 ) *5/9;
     
    printf("temperature in celcius=%.2f", celcius);
    return 0; 
}