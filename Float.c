#include <stdio.h>

int main() {
    float a, b, temp;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a = %.1f, b = %.1f", a, b);

    return 0;
}
