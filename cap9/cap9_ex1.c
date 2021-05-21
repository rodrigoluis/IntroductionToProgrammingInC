/*
Make an algorithm to read a student's data. The data to be stored 
in this structure are name (100 characters), course (40 characters) 
and age (integer). Read and print the data in the main function.
*/

#include <stdio.h>

typedef struct 
{
    char name[100];
    char course[40];
    int age;
} student;


int main()
{
    student s1;
    printf("Inform student's name: ");
    fgets(s1.name, 100, stdin);

    printf("Inform student's course: ");
    fgets(s1.course, 40, stdin);

    printf("Inform student's age: ");
    scanf("%d", &s1.age);

    printf("\nStudents information:\n");
    printf("  Name: %s", s1.name);
    printf("  Course: %s", s1.course);
    printf("  Age: %d\n", s1.age);        
    
    return 0;
}
