#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("sum of digit is %d",sum(n));
}
int sum(int n){
    if(n==0)
    return 0;
    return (n%10)+ sum(n/10);
}