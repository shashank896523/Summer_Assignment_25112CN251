#include<stdio.h>
int Fib(int n){
    int i,c,a=0,b=1;
    printf("%d %d", a, b);
     for(i=3; i<=n; i++)
    {
        c=a+b;
        printf("\t %d",c);
        a=b;
        b=c;
    }
}
int main(){
    int n;
    printf("enter no. of terms:");
    scanf("%d",&n);
    Fib(n);
    return 0;
}
