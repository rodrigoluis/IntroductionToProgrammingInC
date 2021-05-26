/*
Make a function that receives an integer as a 
parameter and inform if it is divisible by 2.
*/

#include <stdio.h>

void isDividedBy2(int num)
{
    if(num%2 == 0)
    {
        printf("It is divisible by two.\n");
    }
    else
    {
        printf("It is not divisible by two.\n");
    }
}

int main()
{
    // Testing function
    int v1;
    printf("Inform an integer: ");
    scanf("%d", &v1);
    isDividedBy2(v1);
    return 0;
}
