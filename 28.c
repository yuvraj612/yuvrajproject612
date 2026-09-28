//WAP to calculate profit or loss
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: Rs %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss: Rs %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}