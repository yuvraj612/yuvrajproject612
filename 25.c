//WAP to convert days into weeks and days
#include <stdio.h>

int main() {
    int days, weeks;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    days = days % 7;

    printf("The number of weeks is: %d\n", weeks);
    printf("The remaining days is: %d\n", days);

    return 0;
}