#include <stdio.h>
int main() {
    int marks[5];
    int total = 0;
    float percentage;
    int grade;

    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;
    grade = (int)(percentage / 10); // Convert percentage to a scale of 0-10 for switch case

    switch(grade) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}
