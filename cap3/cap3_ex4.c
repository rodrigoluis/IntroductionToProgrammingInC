/*
Write a function to receive a man's height in meters, 
calculate and print his ideal weight (in kg) with 
the formula IdealWeight = (72.7 * height - 58).
*/

#include <stdio.h>

float computeIdealWeight(float height)
{
    float IdealWeight;
    IdealWeight = (72.7 * height - 58);
    printf("Ideal Weight: %.2f kg\n", IdealWeight);
}

int main()
{
    float height;
    printf("Inform men's height: ");
    scanf("%f", &height);
    computeIdealWeight(height);
    return 0;
}
