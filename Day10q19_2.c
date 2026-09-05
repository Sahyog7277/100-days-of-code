// Program to classify a triangle based on its side lengths.
#include <stdio.h>
int main() {
    int a = 3, b = 3, c = 4;
    if(a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if(a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
    return 0;
}