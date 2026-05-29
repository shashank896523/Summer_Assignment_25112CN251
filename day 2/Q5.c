#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter number you want to find sum for");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        sum = sum+r;
        n = n/10;
    }
printf("the sum of digit is %d", sum);
}