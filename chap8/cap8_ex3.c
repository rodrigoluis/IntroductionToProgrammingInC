/*
Make an algorithm to read a square matrix of size 10 and a function to 
invert the lines through the columns in a second matrix of the same size. 
Print the second matrix at the end.
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

void printMatrix(int m[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void invertLines(int m1[N][N], int m2[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            m2[j][i] = m1[i][j];
        }
    }
}

int main()
{
    int mat1[N][N], mat2[N][N];
    
    // Read matrices
    readMatrix(mat1);

    // Invert lines and columns
    invertLines(mat1, mat2);

    // Print sum
    printf("\nResulting matrix:\n");
    printMatrix(mat2);
    return 0;
}
