// This program calculates the area and parameter of a rectangle and prints the results.
#include <stdio.h>

int main(void) {
    int length = 3;
    int breadth = 7;

    int area = length * breadth;
    int parameter = 2 * (length + breadth);

    printf("Area of the rectangle: %d\n", area);
    printf("Parameter of the rectangle: %d\n", parameter);

        return 0;
        

}