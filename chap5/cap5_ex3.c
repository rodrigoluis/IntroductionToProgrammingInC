/*
John is 1.50 meters tall and grows 2 centimeters per year, 
while Paul is 1.40 meters tall and grows 3 centimeters per year. 
Write a function to calculate and return how many years it will 
take for Paul to be bigger than John.
*/

#include <stdio.h>

int yearsNeeded(float john, float johnGrowth, 
                float paul, float paulGrowth)
{
    int years = 0;
    while(john >= paul)
    {
        john = john + johnGrowth;
        paul = paul + paulGrowth;
        years++;
        //printf("%d - %.1f %.1f\n", years, john, paul);
    }
    return years;
}

int main()
{
    // Test function
    int years = yearsNeeded(150, 2.0, 140, 3.0);
    printf("Years: %d\n", years);
    return 0;
}
