/*
Make a function to receive two real numbers and check 
if both are greater than zero. If so, inform "Values ​​are valid". 
Otherwise, inform "Invalid values".
*/

#include <stdio.h>

void checkValues(float v1, float v2)
{
    if(v1>0 && v2>0)
    {
        printf("Values ​​are valid.\n");
    }
    else
    {
        printf("Invalid values.\n");
    }
}

int main()
{
    // Testing function
    float v1, v2;
    printf("Inform two values: ");
    scanf("%f %f", &v1, &v2);
    checkValues(v1, v2);
    return 0;
}
