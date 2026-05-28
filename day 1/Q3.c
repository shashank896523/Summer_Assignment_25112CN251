#include<stdio.h>
int main(){
    int i,j,n,fact=0;
    printf("Enter number you want to find factorial :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact=1;
        for(j=1; j<=i; j++)
        {
            fact = fact*j;
        }
    }
    printf("The factorial of given number is : %d",fact);
    return 0;
}