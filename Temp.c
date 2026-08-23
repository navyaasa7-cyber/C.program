#include <stdio.h>

int main() {
    float F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0 / 9.0) * (F - 32);
    printf("Temperature in Celsius: %f\n", C);

    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = C * (9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit: %f", F);

    return 0;
}
