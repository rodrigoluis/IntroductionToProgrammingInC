/*
Imprimir o valor 2.346728 com 1, 2, 3 e 5 casas decimais.

Print the value 2.346728 with 1, 2, 3 and 5 decimal places.
*/

#include <stdio.h>

int main()
{
    float val = 2.346728;
    printf("%.1f\n", val);
    printf("%.2f\n", val);
    printf("%.3f\n", val);
    printf("%.5f\n", val);
    return 0;
}
