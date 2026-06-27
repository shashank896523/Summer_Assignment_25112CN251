#include<stdio.h>
#include<string.h>
struct student{
    char First_name[10];
    char Father_name[10];
    char Surname[10];
    int age;
    int contact_info [10];
}S1;
int main(){
    printf("Enter you're first name:\n");
    scanf("%s",S1.First_name);
    printf("Enter you're father name:\n");
    scanf("%s",S1.Father_name);
    printf("Enter you're surname:\n");
    scanf("%s",S1.Surname);
    printf("Enter you're age\n");
    scanf("%d",&S1.age);
    printf("Enter you're contact information:\n");
    scanf("%d",&S1.contact_info);
    printf("\n%s",S1.First_name);
    printf("\n%s",S1.Father_name);
    printf("\n%s",S1.Surname);
    printf("\n%d",S1.age);
    printf("\n%d",S1.contact_info);

}