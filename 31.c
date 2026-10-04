#include <stdio.h>
int main() {
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    if(percentage >= 90) {
        printf("Grade: A\n");
    }
    else if(percentage >= 80) {
        printf("Grade: B\n");
    }
    else if(percentage >= 70) {
        printf("Grade: C\n");
    }
    else if(percentage >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
