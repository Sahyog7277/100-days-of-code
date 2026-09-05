// This program finds the root of quadratic equation and categorizes them.
#include <stdio.h>
#include <math.h>

int main()
{
    double a = 1, b = -3, c = 2;
    double d, root1, root2;

    d = b * b - 4 * a * c;

    printf("Quadratic Equation: x^2 - 3x + 2 = 0\n");

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else
    {
        printf("Roots are complex.\n");
    }

    return 0;
    
}