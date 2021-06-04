/*
Write a function that receives an array of integers and its size, 
find the smallest value and print this value and its index position.
*/

#include <stdio.h>

void printSmallest(int array[], int size)
{
    int index, value;
    
    // Initialize the index and value with first element data
    index = 0;
    value = array[0];

    // find smallest
    for(int i = 1; i < size; i++)
    {
        if(array[i] < value)
        {
            index = i;
            value = array[i];
        }
    }

    printf("Smaller Value is %d and its is in %d index position.\n", value, index);
}

int main()
{
    int array[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int size = 10;         
    int index, value;
    
    // Initialize the index and value with first element data
    index = 0;
    value = array[0];

    // find smallest
    for(int i = 1; i < size; i++)
    {
        if(array[i] < value)
        {
            index = i;
            value = array[i];
        }
    }

    printf("Smaller Value is %d and its is in index position %d.\n", value, index);

    return 0;
}
