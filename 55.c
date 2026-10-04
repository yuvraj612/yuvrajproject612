#include <stdio.h>

int main() {
    int numbers[5];
    int i, largest, second;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    second = numbers[0];

    for(i = 1; i < 5; i++) {
        if(numbers[i] > largest) {
            second = largest;
            largest = numbers[i];
        }
        else if(numbers[i] > second && numbers[i] != largest) {
            second = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second largest = %d", second);

    return 0;
}