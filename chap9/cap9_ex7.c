/*
Make an algorithm to register people. Each person will contain an 
ID (12 characters), name (100 characters), age (integer), and 
telephone (10 characters). Your system will store a maximum of 
100 people and allow you to read the information of a person 
(include the person in the first vacant position of the vector), 
print by age (inform the minimum and maximum ages and print people 
who are in this range), print by initial (consider that all initials are 
registered in upper-case)  and print all registered records. Create a menu 
to access the functions that will perform the requested operations. 
Initialize the ID of all 100 records at the beginning of the program 
with the text "empty". Use this information to define whether or not 
a record was read at that specific position in the vector.
*/

#include <stdio.h>
#include <string.h>
#define N 100

typedef struct 
{
  char id[12];
  char name[100];
  char phone[15];
  int age;
} person;

void initPeople(person list[])
{
  for(int i = 0; i < N; i++)
  {
    strcpy(list[i].id, "empty");
  }
}

void insertPerson(person list[])
{
  for(int i = 0; i < N; i++)
  {
    if( strcmp(list[i].id, "empty") == 0 )
    {
      printf("\nPerson %d info.\n", i+1);
      printf(" ID: ");      
      fgets(list[i].id, sizeof(list[i].id), stdin);
      printf(" Name: ");
      fgets(list[i].name, sizeof(list[i].name), stdin);
      printf(" Age: ");
      scanf("%d%*c", &list[i].age);   
      printf(" Phone number: ");
      fgets(list[i].phone, sizeof(list[i].phone), stdin);
      break;        
    }
  }
}
void printByAge(person list[])
{
  int ageMin, ageMax;
  printf("Inform min and max age: ");
  scanf("%d %d%*c", &ageMin, &ageMax);
  printf("\n\n-- People between %d and %d years --\n", ageMin, ageMax);  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty") &&
       list[i].age >= ageMin &&
       list[i].age <= ageMax)
    {
      printf("\nPerson ID %s", list[i].id);
      printf(" Name:  %s", list[i].name);
      printf(" Age: %d\n", list[i].age);
      printf(" Phone: %s", list[i].phone);            
    }
  }  
  printf("\n\n");  
}

void printByInitial(person list[])
{
  char initial;
  printf("Inform initial letter of the name: ");
  scanf("%c%*c", &initial);
  printf("\n\n-- People with initial letter %c --\n", initial);  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty") &&
       list[i].name[0] == initial)
    {
      printf("\nPerson ID %s", list[i].id);
      printf(" Name:  %s", list[i].name);
      printf(" Age: %d\n", list[i].age);
      printf(" Phone: %s", list[i].phone);            
    }
  }  
  printf("\n\n");  
}

void printAll(person list[])
{
  printf("\n\n-- People registered --\n");  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty"))
    {
      printf("\nPerson ID %s", list[i].id);
      printf(" Name:  %s", list[i].name);
      printf(" Age: %d\n", list[i].age);
      printf(" Phone: %s", list[i].phone);            
    }
  }  
  printf("\n\n");
}


int main()
{
    person people[N];
    initPeople(people);
    int op=1;

    // Menu
    while(op)
    {
      printf("\n\n-- Menu --\n");
      printf("1. Insert person.\n");      
      printf("2. Print by age.\n");      
      printf("3. Print by initial.\n");      
      printf("4. Print all.\n");                        
      printf("0. Exit\n Option: ");
      scanf("%d%*c", &op);
      switch(op)
      {
        case 1:
          insertPerson(people);
          break;
        case 2:
          printByAge(people);
          break;
        case 3:
          printByInitial(people);
          break;
        case 4:
          printAll(people);
          break;              
      }
    }
    return 0;
}
