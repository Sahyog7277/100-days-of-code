// This program inputs time in seconds and converts it into hours:minutes:seconds format and prints the result.
#include <stdio.h>
int main(void) {
    int seconds = 7322;
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingseconds = seconds % 60;

    printf("Time in hours:minutes:seconds format: %d:%d:%d\n", hours , minutes , remainingseconds);
    return 0;
}