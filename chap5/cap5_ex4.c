/*
Write a function that receives a positive integer n 
parameter and calculate the value of S. The function 
will return the value of S.
 S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n 
*/

#include <stdio.h>

float computeFunc(int n)
{
    float S = 0;
    for(int i = 1; i <= n; i++)
    {
        S = S + 1 / (float) i; 
    }
    return S;
}

int main()
{
    int n;
    float S;
    printf("Inform n: ");
    scanf("%d", &n);
    S = computeFunc(n);
    printf("S = %.3f\n", S);
    return 0;
}
