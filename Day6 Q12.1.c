// This program checks weather an integer is Positive, negative or zero using nested if_else statements and prints the result.
#include <stdio.h>
int main(void) {
    int number = -5;
    if (number > 0) {
        printf("%d is a positive number.\n", number);

    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }
    return 0;

}
