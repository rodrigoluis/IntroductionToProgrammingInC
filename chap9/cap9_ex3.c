/*
Make an algorithm to read the information of N students (where N is defined with 
the define directive). The information to be read from each student is name (100 
characters) and a final grade (real). At the end, inform the names of the students 
who were approved (final grade >= 60). Use functions for reading and printing.
*/

#include <stdio.h>
#define N 3

typedef struct 
{
    char name[100];
    float grade;
} student;

void readStudents(student s[])
{
  for(int i = 0; i < N; i++)
  {
    printf("Inform student's name: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);

    printf("Inform student's grade: ");
    scanf("%f%*c", &s[i].grade);

  }
}

void printApproved(student s[])
{
  printf("List of approved students: \n");
  for(int i = 0; i < N; i++)
  {
    if(s[i].grade >= 60)
    {
      printf("* %s", s[i].name);
    }
  }
}


int main()
{
    student s[N];
    readStudents(s);
    printApproved(s);
    
    return 0;
}
