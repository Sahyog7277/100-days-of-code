// This program swaps two numbers using a theird variable and prints the results.
#include <stdio.h>

int main(void) {
    int num1 = 3;
    int num2 = 5;
    int temp;

    printf("Before swapping: num1 =%d\n , num2 = %d\n", num1 , num2);
   
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d\n , num2 = %d\n", num1 , num2);

    return 0;

}

