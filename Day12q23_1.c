// Program to calculate library fine based on the number of late days.
#include <stdio.h>
int main() {
    int Late_days = 4;
    int fine;
    if (Late_days <= 0) {
        printf("No fine");
    } else if(Late_days <= 5) {
        fine = Late_days * 2;
        printf("Fine: Rs. %d", fine);

    } else if(Late_days <= 10) {
        fine = (5 * 2) + ((Late_days - 5) * 4);
        printf("Fine: Rs. %d", fine);

    } else if(Late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((Late_days - 10) * 6);
        printf("Fine: Rs. %d", fine);

    } else {
        printf("Membership cancelled"); 
    }
    return 0;   

    }