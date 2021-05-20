/*
Calculate and display the volume of an oil can, 
using the formula volume = 3.14159 * radius * radius * height.
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    float radius, height, volume;   
    printf("Inform radius and height of the oil can: ");
    scanf("%f %f", &radius, &height);

    volume = 3.14159 * radius * radius * height;

    printf("Volume = %.2f\n", volume);
    return 0;
}
