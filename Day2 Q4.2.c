// This program calculates the area and circumference of a circle and prints the results.
#include <stdio.h>

int main(void) {
    float radius = 3;

    float area = 3.14 * radius * radius;
    float circumference =  2 * 3.14 * radius;

    printf("area of the circle: %.2f\n", area);
    printf("circumference of the circle: %.2f\n", circumference);

    return 0;
    
}