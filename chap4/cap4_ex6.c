/*
Make a function that receives number of the day of the week and print its name. 
Consider number 1 as Sunday, 2 for Monday, etc. If the day 
does not exist (less than 1 or greater than 7), display the 
message "Invalid day of the week".
*/

#include <stdio.h>

void printName(int day)
{
    switch(day)
    {
        case 1:
            printf("Sunday.\n");
            break;
        case 2:
            printf("Monday.\n");
            break;
        case 3:
            printf("Tuesday.\n");
            break;
        case 4:
            printf("Wednesday.\n");
            break;
        case 5:
            printf("Thursday.\n");
            break;
        case 6:
            printf("Friday.\n");
            break;
        case 7:
            printf("Saturday.\n");
            break;
        default:            
            printf("Invalid day of the week.\n");
    }
}

int main()
{
    // Testing function
    int day;
    printf("Inform the number of the day: ");
    scanf("%d", &day);
    printName(day);
    return 0;
}
