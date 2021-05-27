/*
The conversion of Fahrenheit to Celsius is obtained by the 
formula C = (F-32) /1.8. Develop a function to calculate and 
print a table of Celsius as a function of Fahrenheit ranging 
from 50 to 150 from 1 in 1.
*/

#include <stdio.h>

void printTemperatureTable()
{
    float c;
    for(int f = 50; f <= 150; f++)
    {
        c = (f-32) / 1.8;
        printf("F° = %d / C° = %.1f\n", f, c);
    }
}

int main()
{
    // Test function
    printTemperatureTable();
    return 0;
}
