// This program checks whether an integer is positive, negative, or zero using nested if-else statements and prints the result.
#include <stdio.h>

int main(void) {
    int number = 0;
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }
    return 0;
}
