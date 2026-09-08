// Program to calculate library fine based on the number of late days.
#include <stdio.h>
int main() {
    int late_days = 31;
    int fine;
    if (late_days <= 0) {
        printf("No fine");
    } else if(late_days <= 5) {
        fine = late_days * 2;
        printf("Fine: Rs. %d", fine);
    } else if(late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
        printf("Fine: Rs. %d", fine);
    } else if(late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
        printf("Fine: Rs. %d", fine);
    } else {
        printf("Membership cancelled");
    }
    return 0;
}
