/*
Write a function that receives 3 arrays of real numbers and their sizes (integer). 
The function must sum the values of the first two arrays in the third one. 
Print the values ​​of the third array in another function.
*/

#include <stdio.h>

void sumArrays(float v1[], float v2[], float v3[], int size)
{
    for(int i = 0; i < size; i++)
    {
        v3[i] = v1[i] + v2[i]; 
    }
}

void printArray(float v[], int size)
{
    printf("Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%.1f  ", v[i]);
    }
    printf("\n");
}


int main()
{
    float array1[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float array2[5] = {10.0, 22.0, 33.0, 44.0, 55.0};    
    float array3[5];

    sumArrays(array1, array2, array3, 5);
    
    printArray(array3, 5);
    return 0;
}
