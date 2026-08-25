// This program checks weather an integer is even or odd using if-else and prints the result.
#include <stdio.h>
int main(void) {
    int number = 7;
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    return 0;
}