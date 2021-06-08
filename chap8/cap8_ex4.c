/*
Write an algorithm to read a matrix of real numbers, a scalar 
and a function to calculate the multiplication of the matrix 
by the scalar. Print the result in a second function.
*/

#include <stdio.h>
#define N 3

void readMatrix(float mat[N][N])
{
    int i, j;
    printf("Inform the values of this matrix: ");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
}

void printMatrix(float m[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%.1f\t", m[i][j]);
        }
        printf("\n");
    }
}

void multiplyByScalar(float m[N][N], float scalar)
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            m[i][j] = m[i][j] * scalar;
        }
    }
}

int main()
{
    float mat1[N][N], scalar;
    
    // Read matrices
    readMatrix(mat1);

    printf("Inform a scalar: ");
    scanf("%f", &scalar);

    // Invert lines and columns
    multiplyByScalar(mat1, scalar);

    // Print sum
    printf("\nResulting matrix:\n");
    printMatrix(mat1);
    return 0;
}
