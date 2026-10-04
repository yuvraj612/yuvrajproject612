#include <stdio.h>

int main() {
    int numbers[5];
    int i, search, position = -1;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++) {
        if(numbers[i] == search) {
            position = i;
            break;
        }
    }

    if(position != -1) {
        printf("Number found at index %d", position);
    } else {
        printf("Number not found");
    }

    return 0;
}