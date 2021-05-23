/*
Write a function to receive two integers and print the product of those values.
*/

#include <stdio.h>
#include <math.h>

void printProduct(int n1, int n2)
{
    int p;
    p = n1 * n2;
    printf("Product: %d\n", p);

}

int main()
{
    int n1, n2;
    printf("Inform two integers: ");
    scanf("%d %d", &n1, &n2);
    printProduct(n1, n2);
    return 0;
}
