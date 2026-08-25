// This pragram calculates simple and compound interest and prints the results.
#include <stdio.h>

    int main(void) {

        float principal = 1000;
        float rate = 5;
        float time = 2;

        float simpleinterest = (principal * rate * time) / 100;
        float compoundinterest = principal * (1 + rate / 100) * (1 + rate / 100) - principal;

        printf("Simple interest: %.2f\n", simpleinterest);
        printf("Compound interest: %.2f\n", compoundinterest);

        return 0;
        

    }