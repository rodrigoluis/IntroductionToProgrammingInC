/*
Make an algorithm to register the vehicles of a company. The company has 10 cars. 
Each register contains the driver's name (100 characters), vehicle plate (10 
characters), vehicle color (20 characters) and operating shift (1 character). 
The value of the shift variable can assume the values: m (morning), a (afternoon), 
n (night) or d (all day). After the registration of all cars, print the information 
of the cars in each shift. Use functions to perform the requested operations.
*/

#include <stdio.h>
#define N 10

typedef struct 
{
    char name[100];
    char plate[9];    
    char color[20];
    char shift;
} car;

void readCarInfo(car list[])
{
  for(int i = 0; i < N; i++)
  {
    printf("\nInform car %d info.\n", i);
    printf(" Driver's name: ");
    fgets(list[i].name, sizeof(list[i].name), stdin);
    printf(" Car plate: ");
    fgets(list[i].plate, sizeof(list[i].plate), stdin);
    printf(" Color: ");
    fgets(list[i].color, sizeof(list[i].color), stdin);
    printf(" Shift: ");
    scanf("%c%*c", &list[i].shift);       
  }
}

void printCarsByShift(car list[])
{
  char shifts[4] = {'m','a','n','d'};

  printf("-- Cars by shift -- \n\n");
  for(int s = 0; s < 4; s++)
  {
    printf("Shift: %c\n", shifts[s]);
    for(int i = 0; i < N; i++)
    {
      if(list[i].shift == shifts[s])
      {
        printf(" * Driver Name: %s", list[i].name);
        printf(" * Plate: %s", list[i].plate);
        printf(" * Color: %s\n", list[i].color);
      }
    }
    printf("\n");
  }
}

int main()
{
    car carList[N];
    readCarInfo(carList);
    printCarsByShift(carList);
    
    return 0;
}
