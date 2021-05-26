/*
The employees of a company received a salary increase: 
technicians (code = 1), 50% increase; managers (code = 2), 
30%; other employees (code = 3), 20%. Write a function 
that receives an employee's job code and a salary, 
calculate and print the new salary after the increase.
*/

#include <stdio.h>

void printNewSalary(int code, float salary)
{
    float newSalary;
    switch(code)
    {
        case 1:
            newSalary = salary * 1.50;
            printf("New Salary: %.2f.\n", newSalary);
            break;
        case 2:
            newSalary = salary * 1.30;
            printf("New Salary: %.2f.\n", newSalary);
            break;
        case 3:
            newSalary = salary * 1.20;
            printf("New Salary: %.2f.\n", newSalary);
            break;
        default:            
            printf("Invalid code.\n");
    }
}

int main()
{
    // Testing function
    int code;
    float salary;
    printf("Inform the code and the salary: ");
    scanf("%d %f", &code, &salary);
    printNewSalary(code, salary);
    return 0;
}
