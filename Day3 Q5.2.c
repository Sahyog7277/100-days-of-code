//  This Program converts the temperature from fahrenheit to celsius and prints the result.
#include <stdio.h>

int main(void) {

    float celcius = 100;
    float farenheit = (celcius * 9 / 5) +32;

    printf("Temperature in Farenheit: %.2f\n", farenheit);

    return 0;
    
}