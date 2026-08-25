// This program checks if an integer is even or odd using a ternary operator and prints the result.
#include <stdio.h>
int main(void) {
    int number = 12;
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
     
      }  else {
        printf("%d is an odd number.\n", number);
    }
    return 0;
    
    }