#include<stdio.h>
struct salary{
    char Name[30];
    float Basic;
    float HRA;
    float DA;
    float Total;
}S1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",S1.Name);
    printf("Enter you're basic salary:\n");
    scanf("%f",&S1.Basic);
    printf("Enter HRA:\n");
    scanf("%f",&S1.HRA);
    printf("Enter DA:\n");
    scanf("%f",&S1.DA);
    S1.Total=S1.Basic+S1.HRA+S1.DA;
    printf("\nSalary Details of %s are as follows\n",S1.Name);
    printf("Basic Salary : %.2f\n",S1.Basic);
    printf("HRA : %.2f\n",S1.HRA);
    printf("DA : %.2f\n",S1.DA);
    printf("Total Salary : %.2f\n",S1.Total);
}