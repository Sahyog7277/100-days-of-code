// This program finds and displays the sum of the first n natural numbers.

#include <stdio.h>

int main(void) {

    int n = 5;
    int sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers: %d\n", n , sum);

    return 0;
}
