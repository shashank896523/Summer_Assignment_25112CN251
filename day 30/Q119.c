#include<stdio.h>
#include<string.h>
struct Employee
{   int id;
    char name[30];
    float salary;
}S[100];
int main()
 { int n,i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("\nEmployee %d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&S[i].id);
            printf("Employee Name: ");
        scanf("%s",S[i].name);
        printf("Salary: ");
        scanf("%f",&S[i].salary);
    }
    printf("\n------ Employee Details ------\n");
    for(i=0;i<n;i++)
    {
         printf("\n the employee name is: %s",S[i].name);
        printf("\nThe employee ID is : %d",S[i].id);
              printf("\nThe employee salary is: %.2f\n",S[i].salary);
    }
}