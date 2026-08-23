#include <stdio.h>

int main() {
    int quantity1, quantity2;
    float price1, price2, totalcost;

    printf("Enter the price of item 1: ");
    scanf("%f", &price1);

    printf("Enter the quantity of item 1: ");
    scanf("%d", &quantity1);

    printf("Enter the price of item 2: ");
    scanf("%f", &price2);

    printf("Enter the quantity of item 2: ");
    scanf("%d", &quantity2);

    totalcost = price1 * quantity1 + price2 * quantity2;

    printf("Total Cost = %.4f", totalcost);

    return 0;
}
