#include<stdio.h>
#include<string.h>
struct contact{
    char Name[20];
    int Mob[10];
    char Email[20];
}S1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",S1.Name);
    printf("Enter you're mobile number:\n");
    scanf("%d",&S1.Mob);
    printf("Enter you're Email:\n");
    scanf("%s",S1.Email);
    printf("\n");
    printf("Contact Details");
    printf("Customer's name : %s\n",S1.Name);
    printf("Customer's mobile : %d\n",S1.Mob);
    printf("Customer's email : %s\n",S1.Email);
}