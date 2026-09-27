//WAP to seperate the digits of a three digit number
#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    digit3 = num % 10;
    num = num / 10;
    digit2 = num % 10;
    digit1 = num / 10;

    printf("The digits are: %d, %d, %d\n", digit1, digit2, digit3);

    return 0;
}
