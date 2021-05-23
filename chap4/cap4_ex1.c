/*
Make a function to receive two integer numbers and inform if 
the first is greater, less than or equal to the second.
*/

#include <stdio.h>

void printGreater(int v1, int v2)
{
    if(v1 > v2)
    {
        printf("First is greater.\n");
    }
    else
    {
        if(v1 < v2)
        {
            printf("Second is greater.\n");
        }
        else
        {
            printf("Number are equal.\n");
        }
    }
}

int main()
{
    // Testing function
    int v1, v2;
    printf("Inform two integers: ");
    scanf("%d %d", &v1, &v2);
    printGreater(v1, v2);
    return 0;
}
