#include <stdio.h>

int main() {
    float rupees, dollars;

    printf("Enter amount in Indian Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 88.0;

    printf("Amount in US Dollars = %.2f USD\n", dollars);

    return 0;
}
