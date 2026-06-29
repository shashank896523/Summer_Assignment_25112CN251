#include<stdio.h>
#include<string.h>
struct Item
{  int id;
    float price;
    int quantity;
    char name[30]; 
}S[100];
int main()
{  int n,i;
   printf("Enter number of items: ");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("\nEnter Item ID: ");
        scanf("%d",&S[i].id);
        printf("Enter Item Name: ");
        scanf("%s",S[i].name);
        printf("Enter Quantity: ");
        scanf("%d",&S[i].quantity);
        printf("Enter Price: ");
        scanf("%f",&S[i].price);
    }
    printf("\n--- INVENTORY DETAILS -----------\n");
    for(i=0;i<n;i++)
    {
        printf("\nItem %d\n",i+1);
        printf(" Product ID: %d\n",S [i].id);
        printf(" Product name: %s\n",S[i].name);
        printf("product quantity: %d\n",S[i].quantity);
        printf("product price: %.2f\n",S[i].price);
    }
    return 0;
}