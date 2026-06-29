#include<stdio.h>
#include<string.h>
struct bank{
    char Name[30];
    int Acc_no;
    float bal;
}s1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",s1.Name);
    printf("Enter you're account number:\n");
    scanf("%d",&s1.Acc_no);
    printf("Enter you're balance:\n");
    scanf("%f",&s1.bal);
    printf("\nAccount Details\n");
    printf("Customer Name is : %s\n",s1.Name);
    printf("Customer account number is : %d\n",s1.Acc_no);
    printf("Customer balance is : %.3f\n",s1.bal);
}