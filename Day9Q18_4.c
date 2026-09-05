// Program to assign a grade based on the percentage obtained.
#include <stdio.h>
int main() {

    int percentage = 50;
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
return 0;
    }