/*
Develop a program to calculate and present the volume of a rectangular box, 
using the formula volume = length * width * height.
*/

#include <stdio.h>

int main()
{
    float volume, length, width, height;   
    printf("Inform box dimenions (length, width, height): ");
    scanf("%f %f %f", &length, &width, &height);

    volume = length * width * height;

    printf("Volume = %.2f\n", volume);
    return 0;
}
