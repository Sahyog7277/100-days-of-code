// This program checks whether a character is an uppercase letter, lowercase letter, digit, or special character and prints the result.
#include <stdio.h>

int main(void) {
    char character = 'a';
    if(character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase letter.\n", character);
    } else if(character >= 'a' && character <= 'z') {
        printf("%c is a lowercase letter.\n", character);
    } else if(character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special character.\n", character);
    }
    return 0;
}
