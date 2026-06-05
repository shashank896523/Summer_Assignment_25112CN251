#include<stdio.h>
int main(){
    int n,large=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n%2 ==0)
    {
        large =2;
        n= n/2;
    }
    for(int i=3;i<=n;i=i+2){
        while(n%i==0){
            large =i;
            n=n/i;
        }
    }
    printf("Largest prime factor is %d",large);
    return 0;
}