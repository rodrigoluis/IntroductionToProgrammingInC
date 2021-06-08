/*
Make an algorithm to read a square matrix of dimension 10, a function 
to find the highest value of this matrix and another function to find 
the lowest value. Print the values ​​found in the main function.
*/

#include <stdio.h>
#define N 10

void readMatrix(int mat[N][N])
{
    int i, j;
    printf("Inform the values of this matrix: ");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int findLowest(int m[N][N])
{
    int i, j;
    int lowest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] < lowest)
                lowest = m[i][j];
        }
    }
    return lowest;
}

int findHighest(int m[N][N])
{
    int i, j;
    int highest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] > highest)
                highest = m[i][j];
        }
    }
    return highest;
}

int main()
{
    int mat[N][N];
    int lowest, highest;
    
    // Read matrices
    readMatrix(mat);

    // Find lowest and highest
    lowest  = findLowest(mat);
    highest = findHighest(mat);

    // Print sum
    printf("Lowest value:  %d\n", lowest);
    printf("Highest value: %d\n", highest);    

    return 0;
}
