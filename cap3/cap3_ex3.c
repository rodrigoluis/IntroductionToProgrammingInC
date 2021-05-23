/*
Write a function to receive the base and height of a right triangle. 
This function should calculate and return its area using 
the equation Area = (Base * Height) / 2.
*/

#include <stdio.h>

float rightTriangleArea(float base, float height)
{
    float area;
    area = (base * height) / 2;
    return area;
}

int main()
{
    float area, base, height;
    printf("Inform base and height: ");
    scanf("%f %f", &base, &height);
    area = rightTriangleArea(base, height);
    printf("Area: %.2f\n\n", area);
    return 0;
}
