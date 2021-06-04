/*
Make a function to receive an array of integers, its size and a value 
to be searched for in this array. The function must return the number 
of occurrences of this value in the array.
*/

#include <stdio.h>

int countOccurrences(int array[], int size, int value)
{
    int counter = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] == value)
            counter++;
    }
    return counter;
}

int main()
{
    int v[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int value = 15;
    int count = countOccurrences(v, 10, value);
    printf("Number of ocurrences of %d in the array is %d.\n", value, count); 
    return 0;
}
