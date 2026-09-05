// This program finds the root of quadratic equation and categorizes them.
#include <stdio.h>
#include <math.h>
int main() {
    double a = 1, b = -2, c = 1;
    double discriminant, root1, root2;
    discriminant = b * b - 4 * a * c;
    if(discriminant > 0) {

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    } else if(discriminant == 0){
        
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Roots are: %.2lf\n", root1);
    } else {
        printf("Roots are complex and different.\n");
    }
    return 0;
}