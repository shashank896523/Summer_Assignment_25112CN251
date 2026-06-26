#include<stdio.h>
int main(){
    int a;
    printf("ENter your correct age:");
    scanf("%d",&a);
    if(a>=18)
    printf("You are elegible to vote :) ");
    else
    printf("You are not elegible to vote yet :( ");
    return 0;
}