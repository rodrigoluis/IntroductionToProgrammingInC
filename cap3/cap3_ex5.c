/*
Write a function to receive a student's three grades and 
return the weighted average. Consider the following 
values ​​for the weight of the grades: 2, 3, 5.
*/

#include <stdio.h>

float weightedAverage(float n1, float n2, float n3)
{
    float average;
    average = (n1 * 2 + n2 * 3 + n3 * 5)/10.0;
    return average;
}

int main()
{
    float g1, g2, g3, average;
    printf("Inform students's grades: ");
    scanf("%f %f %f", &g1, &g2, &g3);
    average = weightedAverage(g1, g2, g3);
    printf("Average grade: %.2f\n", average);
    return 0;
}
