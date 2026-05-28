//sum of first n natural number
#include <stdio.h>
int main()
{
    int sum=0,n,i;
    printf("Enter how many natural number you want to sum :");
    scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
    sum = sum+i ;
   }
printf("Sum of number is %d",sum);
return 0;
}