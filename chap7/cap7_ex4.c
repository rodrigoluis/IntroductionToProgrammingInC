/*
Make an algorithm to create and print a string that will be 
the concatenation of two other strings previously read.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], s3[200];
    printf("Write the first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Write the second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Manually concatenate strings (could use strcat)
    int i;
    for(i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
    {
        s3[i] = s1[i];
    }
    int j = i; 
    for(i = 0; s2[i] != '\0' && s2[i] != '\n'; i++, j++)
    {
        s3[j] = s2[i];
    }
    s3[j] = '\0';

    printf("Resulting string: ");
    puts(s3);
    return 0;
}
