// Thia program inputs three numbers and finds the largest among them using if-else and prints the result.
#include <stdio.h>
int main(void) {
    int num1 = 3, num2 = 7, num3 = 5;
    if(num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } else if(num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("%d is the largest number.\n", num3);
    }
    return 0;

    }
    