#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int m1, m2, m3;
    float result;

    printf("Enter three marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    result = average(m1, m2, m3);

    printf("Average = %.2f", result);

    return 0;
}