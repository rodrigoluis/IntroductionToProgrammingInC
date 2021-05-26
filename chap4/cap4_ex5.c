/*
Taking the height (in meters) and sex (m for male or f for female) 
of a person as input data, make a function to calculate and return 
his/her ideal weight, using the formula 
weight = (72.7 * height) - 58 for men and 
weight = (62.1 * height) - 44.7 for women.
*/

#include <stdio.h>

float computeIdealWeight(float height, char sex)
{
    float weight;
    if(sex = 'm')
    {
        weight = (72.7 * height) - 58;
    }
    else
    {
        weight = (62.1 * height) - 44.7;
    }
    return weight;
}

int main()
{
    // Testing function
    float height, weight;
    char sex;
    printf("Inform height and sex: ");
    scanf("%f %c", &height, &sex);
    weight = computeIdealWeight(height, sex);
    printf("Ideal weight: %.2f\n", weight);
    return 0;
}
