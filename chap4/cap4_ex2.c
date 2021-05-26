/*
Make a program to read two integer numbers and divide 
the first by the second, only if the second is different 
from zero. At the end, print the result or a message 
if the second number was zero.
*/

#include <stdio.h>


int main()
{
    // Testing function
    int v1, v2;
    printf("Inform two integers: ");
    scanf("%d %d", &v1, &v2);
    if( v2 != 0)
    {
        printf("%.2f\n", (float) v1/v2);
    }
    else
    {
        printf("Second value must be different from zero.\n");
    }
    return 0;
}
