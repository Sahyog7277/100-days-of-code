// Program to classify a triangle based on its side lengths.
#include <stdio.h>
int main() {
    int side1 = 3, side2 = 3, side3 = 3;
    if(side1 = side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } else if(side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
    return 0;

    }

    