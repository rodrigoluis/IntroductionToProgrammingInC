/*
Write a function to receive a person's age in years, months and days 
and return that age expressed in days. Consider each year has 365 days
 and each month has 30 days. Print the computed days in the main function.
*/

#include <stdio.h>

int computeAge(int year, int months, int days)
{
    int ageInDays = 0;
    ageInDays = 365 * year + 30 * months + days;
}

int main()
{
    // Testing the function
    int output;
    output = computeAge(23, 7, 15);
    printf("Number of computed days:  %d\n", output);
    return 0;
}
