//WAP to convert seconds into hours, minutes and seconds
#include <stdio.h>

int main() {
    int seconds, hours, minutes;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("The time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}