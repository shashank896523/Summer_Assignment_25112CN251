#include<stdio.h>

struct Student{

    char Name[30];
    int Roll;
    float CS;
    float Electrical;
    float eng;
    float Total;
    float Percentage;
}S1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",S1.Name);
    printf("Enter you'r roll number:\n");
    scanf("%d",&S1.Roll);
    printf("Enter you're Computer Science marks:\n");
    scanf("%f",&S1.CS);
    printf("Enter Electrical marks:\n");
    scanf("%f",&S1.Electrical);
    printf("Enter English marks:\n");
    scanf("%f",&S1.eng);
    S1.Total=S1.CS+S1.Electrical+S1.eng;
    S1.Percentage=S1.Total/3;
    printf("\nMarksheet of student %s is as follow\n",S1.Name);
     printf("Roll number of student is: %d\n",S1.Roll);
    printf("Total marks obtained is : %.2f\n",S1.Total);
    printf("Percentage of student is : %.2f\n",S1.Percentage);
    return 0;
}