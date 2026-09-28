//WAP to calculate age next year
#include <stdio.h>

int main() {
    int currentAge;
    printf("Enter your current age: ");
    scanf("%d", &currentAge);

    int ageNextYear = currentAge + 1;
    printf("Your age next year will be: %d\n", ageNextYear);

    return 0;
}