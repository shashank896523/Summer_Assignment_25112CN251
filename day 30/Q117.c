#include<stdio.h>
#include<string.h>
struct student{
    char firstname[10];
    char lastname[20];
    int Roll;
    float Percentage;
    int mobile;
}S1;
int main()
{
    int i,n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    printf("Enter students data:\n");
    for(i=0;i<n;i++){
        printf("Enter you're first name:\n");
        scanf("%s",S1.firstname);
        printf("Enter you're last name:\n");
        scanf("%s",S1.lastname);
        printf("Enter you're roll number:\n");
        scanf("%d",&S1.Roll);
        printf("Enter you're percentage:\n");
        scanf("%f",&S1.Percentage);
        printf("Enter you're mobile number:\n");
        scanf("%d",&S1.mobile);
    }
    printf("\n----The student records are as follow--\n");
        for(i=0;i<n;i++)
    {
        printf("\nThe students First name is : %s\n",S1.firstname);
        printf("The students Last name is : %s\n",S1.lastname);
        printf("The student roll no : %d \n",S1.Roll);
        printf(" the student percentage is : %.2f\n",S1.Percentage);
        printf("THe mobile number of student is : %d\n",S1.mobile);
    }
}
