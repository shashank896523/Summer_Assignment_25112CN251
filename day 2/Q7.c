#include<stdio.h>
int main()
{
    int n,r,pro=1;
    printf("Enter number you want to find product for");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        pro = pro*r;
        n = n/10;
    }
    printf("the sum of digit is %d", pro);
}