// This question checks weather a given character is a vowel or consonant using if-else statements and prints the result.
#include <stdio.h>
int main(void) {
    char character = 'a';
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is a consonant.\n", character);

    }
    return 0;
    }