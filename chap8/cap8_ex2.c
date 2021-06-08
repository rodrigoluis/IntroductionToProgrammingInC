/*
Write a function that receives a 5 x 5 square matrix and convert it to 
an identity matrix. Print the generated matrix in another function.
*/

#include <stdio.h>
#define N 5

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

void convertToIdentity(int m[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i == j)
                m[i][j] = 1;
            else
                m[i][j] = 0;
        }
    }
}

int main()
{
    int mat1[N][N];
    
    // Read matrices
    readMatrix(mat1);

    // Invert lines and columns
    convertToIdentity(mat1);

    // Print sum
    printf("\nResulting matrix:\n");
    printMatrix(mat1);
    return 0;
}
