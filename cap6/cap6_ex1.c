/*
Make an algorithm to read an array of real numbers of size 6 
and print the arithmetic mean of the elements of this array.
*/

#include <stdio.h>

int main()
{
    int i;
    float vet[6], sum = 0, mean;
    
    printf("Inform 6 values: ");
    for(i = 0; i < 6; i++)
    {
        scanf("%f", &vet[i]);
        sum+=vet[i];
    }
    mean = sum / 6.0;
    printf("Average: %.2f\n", mean);
    return 0;
}
