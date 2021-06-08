/*
Make a function that receives a string as a parameter 
and return the number of blank spaces in that string.
*/

#include <stdio.h>

int countSpaces(char s[])
{
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            count++;
    }
    return count;
}

int main()
{
    char s[100];
    int spaces;
    printf("Inform a string: ");
    fgets(s, 100, stdin);
    spaces = countSpaces(s);
    printf("Number of Spaces: %d\n", spaces);

    printf("%d\n",__STDC_VERSION__);

    return 0;
}
