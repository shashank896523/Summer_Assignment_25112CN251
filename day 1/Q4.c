#include<stdio.h>
int main()
{
    int c=0,n;
    printf("Enter number you want to count :");
    scanf("%d", &n);
    while(n!= 0)
    {
        n=n/10;
        c++;
    }
    printf("Total digit is %d",c);
    return 0;
}