#include<stdio.h>
struct library{
    int ID;
    char Name[30];
    char Author[30];
}S1;
int main(){
    printf("Enter Book ID:\n");
    scanf("%d",&S1.ID);
    printf("Enter Book Name:\n");
    scanf("%s",S1.Name);
    printf("Enter Author Name:\n");
    scanf("%s",S1.Author);
    printf("\nLibrary Details\n");
    printf("The book ID is : %d\n",S1.ID);
    printf("The book name is : %s\n",S1.Name);
    printf("The author is : %s\n",S1.Author);
}