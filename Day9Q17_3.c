// This program finds the root of quadratic equation and categorizes them.
#include <stdio.h>
#include <math.h>
int main() {
    int a = 1, b = 2, c = 5;
    double d, root1, root2;
    d = b * b - 4 * a *c;
    if(d > 0) {

        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2lf.\n", root1);
        printf("root2 = %.2lf.\n", root2);
    } else if(d == 0) {

        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("root1 = root2 = %.2lf.\n", root1);
    } else {
        printf("Roots are complex.\n");
    }
    return 0;
    }