#include<stdio.h>
int factorial(int);
int main(){
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial of the given number is %d",result);
}

int factorial(int n)
{
    if(n==1)
    return 1;
    else
    return(n*factorial(n-1));
}