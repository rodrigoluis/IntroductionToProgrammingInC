/*
Write a function that receives a string and invert it. 
Print the resulting string in the main function.
*/

#include <stdio.h>
#include <string.h>

void invertString(char s[])
{
    char aux;
    int i, j, size = (int) strlen(s)-1;
    for(i = 0, j = size; i < size/2; i++, j--)
    {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
}

int main()
{
    char s[100] = "test of the function";
    invertString(s);
    puts(s);
    return 0;
}
