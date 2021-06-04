/*
Redo the previous exercise by passing the array and its size as a parameter 
to a function. Print the lowest value of the array and its index.
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

    printf("Smaller Value is %d and its is in index position %d.\n", value, index);
}

int main()
{
    int v[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    printSmallest(v, 10);

    return 0;
}
