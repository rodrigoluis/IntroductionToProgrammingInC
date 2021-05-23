/*
Write a function to receive the radius of a sphere as a parameter 
and calculate its volume using the formula V = (4 * PI * R3) / 3.
*/

#include <stdio.h>
#include <math.h>

float sphereVolume(float r)
{
    float v;
    v = (4 * M_PI * r * r * r) / 3.0;
    return v;
}

int main()
{
    float volume;
    volume = sphereVolume(3.0);
    printf("Volume: %.2f\n\n", volume);
    return 0;
}
