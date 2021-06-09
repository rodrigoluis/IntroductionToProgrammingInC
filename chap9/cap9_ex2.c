/*
Create a structure called point containing only the x and y (real) coordinates of 
the point. In the main function, declare 2 points, read the x and y coordinates of 
each point and calculate the euclidean distance between them in a separate 
function. At the end, print the computed distance in the main function.
*/

#include <stdio.h>
#include <math.h>

typedef struct 
{
    float x, y;
} point;

float euclideanDistance(point p1, point p2)
{
    float distance;
    distance = sqrt( pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2) );
    return distance;
}

int main()
{
    point p1, p2;  
    printf("Inform the coordinates (x, y) of point p1: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Inform the coordinates (x, y) of point p2: ");
    scanf("%f %f", &p2.x, &p2.y);

    float distance = euclideanDistance(p1, p2);

    printf("Euclidean distance between p1 and p2 is %.2f.\n", distance);   
    return 0;
}