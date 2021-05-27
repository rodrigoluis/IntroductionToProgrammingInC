/*
Write a function int sumInterval (int n1, int n2) to return the sum 
of the integer numbers that exist in the closed interval between 
n1 and n2. The function will work even if the value of n2 is less than n1.
 n=sumInterval(3, 6); // n = 18 (3+4+5+6) 
 n=sumInterval(5, 5);  // n = 5 (5) 
 n=sumInterval(4, 0); // n = 10 (4+3+2+1+0) 
*/

#include <stdio.h>

int sumInterval(int n1, int n2)
{
    if(n1>n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    int sum = 0;
    for(int i = n1; i <= n2; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int sum, n1, n2;
    printf("Inform 2 numbers: ");
    scanf("%d %d", &n1, &n2);
    sum = sumInterval(n1, n2);
    printf("Sum of the interval: %d\n", sum);
    return 0;
}
