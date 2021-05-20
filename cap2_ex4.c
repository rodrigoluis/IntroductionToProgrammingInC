/*
Build an algorithm to read 5 integer values, 
calculate and print the sum of those values.
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int v1, v2, v3, v4, v5, sum;    
    printf("Insert 5 integer values: ");
    scanf("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);

    sum = v1 + v2 + v3 + v4 + v5;

    printf("Sum of the values: %d\n", sum);
    return 0;
}
