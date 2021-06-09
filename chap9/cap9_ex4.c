/*
Make an algorithm to store the information of 11 players on a football team. Each 
player has a name (100 characters), shirt number (integer), weight (float) and 
height (float). Read the information of each player and print at the end this 
information, the initial of the lightest player and the number of the heaviest 
player. The requested operations must be implemented in functions.
*/

#include <stdio.h>
#define N 11

typedef struct 
{
    char name[100];
    int shirt;
    float weight;
    float height;
} player;

void readPlayersInfo(player s[])
{
  for(int i = 0; i < N; i++)
  {
    printf("Inform player %d info.\n", i);
    printf(" Name: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);
    printf(" Shirt Number: ");
    scanf("%d", &s[i].shirt);
    printf(" Weight: ");
    scanf("%f", &s[i].weight);
    printf(" Height: ");
    scanf("%f%*c", &s[i].height);       
  }
}

void printPlayerInfo(player s[])
{
  printf("-- Information of the players -- \n\n");
  for(int i = 0; i < N; i++)
  {
    printf(" Player %d\n", i);
    printf(" >> Name:   %s", s[i].name);
    printf(" >> Shirt:  %d\n", s[i].shirt);
    printf(" >> Weight: %.2f\n", s[i].weight);
    printf(" >> Height: %.2f\n", s[i].height);   
    printf("\n");
  }
}

void printInitialLightest(player s[])
{
  float weight = s[0].weight;
  int idLightest = 0;
  for(int i = 1; i < N; i++)
  {
    if(s[i].weight < weight)
    {
      weight = s[i].weight;
      idLightest = i;
    }
  }
  printf("\nInitial of the lightest: %c\n", s[idLightest].name[0]);
}

void printNumberHeaviest(player s[])
{
  float weight = s[0].weight;
  int idHeaviest = 0;
  for(int i = 1; i < N; i++)
  {
    if(s[i].weight > weight)
    {
      weight = s[i].weight;
      idHeaviest = i;
    }
  }
  printf("\nShirt of the heaviest: %d\n", s[idHeaviest].shirt);
}


int main()
{
    player playerList[N];
    readPlayersInfo(playerList);
    printPlayerInfo(playerList);
    printInitialLightest(playerList);
    printNumberHeaviest(playerList);
    
    return 0;
}
