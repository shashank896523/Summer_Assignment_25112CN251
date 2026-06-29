#include<stdio.h>
struct library{
    int ID;
    char Name[30];
    char Author[30];
}S1;
int main(){
    int i,n;
    printf("Enter number of entries in linrary:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter Book ID:\n");
    scanf("%d",&S1.ID);
    printf("Enter Book Name:\n");
    scanf("%s",S1.Name);
    printf("Enter Author Name:\n");
    scanf("%s",S1.Author);
    }
    printf("\n-----Library Entries are as follow ----\n");
    for(i=0;i<n;i++){
    printf("\nThe book ID is : %d\n",S1.ID);
    printf("The book name is : %s\n",S1.Name);
    printf("The author is : %s\n",S1.Author);
    }
}