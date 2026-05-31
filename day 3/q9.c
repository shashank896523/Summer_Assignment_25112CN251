#include<stdio.h>
int main()
{
    int n,prime=1,i;
    printf("Enter no for cheching ");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i ==0)
        {
            prime=0;
            break;
        }
    }
        if (prime==1)
        {
            printf("prime number");
        }
        else
        printf("not a prime number");
    
}