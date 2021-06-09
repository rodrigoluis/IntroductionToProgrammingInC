/*
Make an algorithm to manage a company's inventory. Each product will have 
an identifier (integer), name (150 characters), quantity in stock (integer) 
and unit price (float). Create an array with 1000 products and initialize 
the identifier of each product with the value 0. Create a menu that allows 
you to insert a new product (check the first identifier with value zero), 
remove a product using its identifier, print all products registered, 
print which product has the largest  inventory and print which product 
has the highest value (multiply the unit value by the stock to discover 
the most valuable product). The identifier of an added product is unique 
and will be its array index + 1.
*/

// SÓ COPIEI O ENUNCIADO. FALTA FINALIZAR.

#include <stdio.h>
#define N 100

typedef struct 
{
  char id[12];
  char name[100];
  char telefone[10]
  int age;
} person;

void initProductList(product list[])
{
  for(int i = 0; i < N; i++)
  {
    list[i].id = 0;
  }
}

void insertProduct(product list[])
{
  for(int i = 0; i < N; i++)
  {
    if(list[i].id == 0)
    {
      printf("\nInform product info.\n");
      list[i].id = i+1;
      printf(" Name: ");
      fgets(list[i].name, sizeof(list[i].name), stdin);
      printf(" Stock: ");
      scanf("%d", &list[i].stock);   
      printf(" Price: ");
      scanf("%f%*c", &list[i].price); 
      break;        
    }
  }
}

void removeProduct(product list[])
{
  int id;
  printf("Inform product's id: ");
  scanf("%d%*c", &id);
  for(int i = 0; i < N; i++)
  {
    if(list[i].id == id)
    {
      printf("Product removed: %s.", list[i].name);
      list[i].id = 0;
      return;
    }
  }
  printf("No product with id %d was found.\n", id);
}

void printAllProducts(product list[])
{
  printf("\n\n-- Product List --\n");  
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      printf("\nProduct ID %d\n", list[i].id);
      printf(" Name:  %s", list[i].name);
      printf(" Stock: %d -", list[i].stock);
      printf(" Price: %.2f\n", list[i].price);            
    }
  }  
  printf("\n\n");
}

void printLargestInventory(product list[])
{
  printf("\n\n-- Product List --\n");  
  float inventory = 0;
  int id = 0;
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      if(list[i].stock > inventory)
      {
        inventory = list[i].stock;
        id = i;
      }
    }
  }  
  printf("\nLargest Inventory: %s", list[id].name);
  printf("Inventory: %d.\n", list[id].stock);  
  printf("\n\n");
}

void printMostValuableProduct(product list[])
{
  printf("\n\n-- Product List --\n");  
  float value = 0;
  int id = 0;
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      float productValue = list[i].price * list[i].stock;
      if(productValue > value)
      {
        value = productValue;
        id = i;
      }
    }
  }  
  printf("\nMost valuable product: %s", list[id].name);
  printf("Value: R$ %.2f.\n", list[id].price * list[id].stock);  
  printf("\n\n");
}



int main()
{
    product list[N];
    initProductList(list);
    int op=1;

    // Menu
    while(op)
    {
      printf("\n\n-- Menu --\n");
      printf("1. Insert product.\n");      
      printf("2. Remove product.\n");      
      printf("3. Print all products.\n");      
      printf("4. Print product with largest inventory.\n");                        
      printf("5. Print product with highest value.\n");                                    
      printf("0. Exit\n Option: ");
      scanf("%d%*c", &op);
      switch(op)
      {
        case 1:
          insertProduct(list);
          break;
        case 2:
          removeProduct(list);
          break;
        case 3:
          printAllProducts(list);
          break;
        case 4:
          printLargestInventory(list);
          break;              
        case 5:
          printMostValuableProduct(list);
          break;
      }
    }
    
    return 0;
}
