#include<stdio.h>
#include<string.h>
struct Employee{
    char Name[30];
    int Employee_id [5];
    float salary;
    int contact_info [10];
}S1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",S1.Name);
     printf("Enter you're Employee id:\n");
    scanf("%d",S1.Employee_id);
    printf("Enter you're Salary\n");
    scanf("%f",&S1.salary);
    printf("Enter you're contact information:\n");
    scanf("%d",&S1.contact_info);
    printf("\n");
    printf("Dear %s you're information are as follow:\n",S1.Name);
    printf("You're name: %s \n",S1.Name);
    printf("You're Employee id: %d \n",S1.Employee_id);
    printf("You're Salary: %0.2f \n",S1.salary);
    printf("Youre contaxt information is : %d \n",S1.contact_info);

}