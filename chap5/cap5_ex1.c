/*
Write a function to print all even numbers in the range 1-100.
*/

#include <stdio.h>

void printEvenNumbers()
{
    int i;
    for(i = 0; i <= 100; i+=2)
    {
        printf("%d  ", i);
    }
}

int main()
{
    // Test function
    printEvenNumbers();
    return 0;
}
