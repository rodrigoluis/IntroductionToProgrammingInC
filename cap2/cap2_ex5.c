/*
Build an algorithm to read 6 real values, 
calculate and print the average of those values.
*/

#include <stdio.h>

int main()
{
    float v1, v2, v3, v4, v5, v6, average;    
    printf("Insert 6 real values: ");
    scanf("%f %f %f %f %f %f", &v1, &v2, &v3, &v4, &v5, &v6);

    average = (v1 + v2 + v3 + v4 + v5 + v6) / 6.0;

    printf("Average: %.2f\n", average);
    return 0;
}
