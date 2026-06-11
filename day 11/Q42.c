#include<stdio.h>
int max(int x, int y)
{  
    if(x>y)
    return x;
    else
    return y;

}
int main()
{
    int a,b;
    printf("Enter a number:");
     scanf("%d",&a);
     printf("Enter another number:");
    scanf("%d",&b);
    printf("Maximum =%d",max(a,b));
    return 0;
    
}