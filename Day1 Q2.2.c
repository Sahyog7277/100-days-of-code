// This program calculates the sum, difference, product, and quotient of two floating-point numbers and prints the results.
#include <stdio.h>

int main(void) {
    float num1 = 7;
    float num2 = 3;

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);
    printf("Quotient = %.2f\n", num1 / num2);

    return 0;
}