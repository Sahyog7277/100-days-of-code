// This program checks whether an integer is positive, negative, or zero using nested if-else statements and prints the result.
#include <stdio.h>

int main(void) {
    int number = 10;
    if (number > 0){
        printf("%d number is positive.\n", number);
    } else if (number < 0) {
        printf("%d number is negative.\n", number);
    } else {
        printf("%d number is zero.\n", number);
    }
    return 0;
    }
    
    