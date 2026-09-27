//WAP to calculate total and average of three subjects marks
#include <stdio.h>

int main() {
    float subject1, subject2, subject3, total, average;

    printf("Enter marks for three subjects:\n");
    scanf("%f %f %f", &subject1, &subject2, &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}