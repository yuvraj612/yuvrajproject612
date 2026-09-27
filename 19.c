//WAP to calculate a shop bill including tax
#include <stdio.h>

int main() {
    float item1, item2, item3, total, tax, bill;

    printf("Enter the prices of three items:\n");
    scanf("%f %f %f", &item1, &item2, &item3);

    total = item1 + item2 + item3;
    tax = total * 0.1; // 10% tax
    bill = total + tax;

    printf("Total: %.2f\n", total);
    printf("Tax: %.2f\n", tax);
    printf("Bill: %.2f\n", bill);

    return 0;
}
