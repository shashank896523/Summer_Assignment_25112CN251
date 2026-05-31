#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("Enter nth number");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The nth number in fibonacci series is %d",a);
    return 0;
}