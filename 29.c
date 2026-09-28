//WAP to calculate parking charges based on hours parked
#include <stdio.h>

int main() {
    int hours;
    float charge;

    printf("Enter the number of hours parked: ");
    scanf("%d", &hours);

    if (hours <= 2) {
        charge = 30;
    } else {
        charge = 30 + (hours - 2) * 20;
    }

    printf("The parking charge is: Rs %.2f\n", charge);

    return 0;
}