//This program calculates the electriciy bill based on the units consumed by the user.
#include <stdio.h>
int main() {
    int units;
    int bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 0) {
        printf("No bill");
    } else if(units <= 100) {
        bill = units * 5;
        printf("Bill: Rs. %d", bill);
    } else if(units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Bill: Rs. %d", bill);
    } else if(units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Bill: Rs. %d", bill);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        
        printf("Bill: Rs. %d", bill);
    }
    return 0;
}
