/*
Make an algorithm to read 3 real number arrays of dimension 10 and a function 
to generate a matrix (10 x 3) where each column is given by one of these arrays.
*/

#include <stdio.h>
#define N 4
#define C 3

void readArray(float vec[N])
{
    int i, j;
    printf("Inform the values of the array: ");
    for(i = 0; i < N; i++)
    {
        scanf("%f", &vec[i]);
    }
}


void printMatrix(float m[N][C])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }
}

void generateMatrix(float m[N][C], float v1[], float v2[], float v3[])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(j == 0)
                m[i][j] = v1[i];
            if(j == 1)
                m[i][j] = v2[i];
            if(j == 2)
                m[i][j] = v3[i];                                
        }
    }
}


int main()
{
    float m[N][C];
    float v1[N], v2[N], v3[N];
    
    // Reading arrays
    readArray(v1);
    readArray(v2);
    readArray(v3);        

    // Generating matrix
    generateMatrix(m, v1, v2, v3);

    printf("\nGenerated Matrix:\n");
    printMatrix(m);
    return 0;
}
