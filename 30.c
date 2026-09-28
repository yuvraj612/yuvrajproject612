//WAP to calculate power of a number
#include <stdio.h>

int main() {
    int a, b, result = 1;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    printf("The result is: %d\n", result);

    return 0;
}