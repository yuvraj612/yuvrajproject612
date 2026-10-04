#include <stdio.h>

int getNumber() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n;
}

int main() {
    int num;

    num = getNumber();

    printf("You entered: %d", num);

    return 0;
}