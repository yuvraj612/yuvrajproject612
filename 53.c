#include <stdio.h>

int largest(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = largest(x, y);

    printf("Largest = %d", result);

    return 0;
}