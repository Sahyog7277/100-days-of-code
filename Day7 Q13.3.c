// This program checks whether a given year is a leap year or not using conditional statements and prints the result.
#include <stdio.h>

int main(void) {
    int year = 2000;
    if(year % 4 == 0){
    if(year % 100 == 0){
    if(year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    } else {
        printf("%d is a leap year.\n", year);
    }
    }
    }
    
