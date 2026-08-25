// This program swaps two numbers without using a third variable and prints the results.

#include <stdio.h>

int main(void) {

    int num1 = 7;
    int num2 = 14;

    printf("Before swapping: num1 = %d\n , num2 = %d\n", num1 , num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %d\n , num2 = %d\n", num1 , num2);

    return 0;
    
}