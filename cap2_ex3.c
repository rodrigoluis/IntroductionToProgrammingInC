/*
Read a temperature in degrees Celsius and have it converted to Fahrenheit.
The conversion formula: F = (9 * C + 160) / 5.
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;    
    printf("Insert a temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9*celsius+160)/5.0;

    printf("Temperature in fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
