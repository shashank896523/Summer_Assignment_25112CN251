#include<stdio.h>
int r=0;
int rev(int);
int main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("The reverse of number %d is %d",n,rev(n));
}
int rev(int n){
     if(n == 0)
        return r;
     r= r* 10 +(n%10);

     return rev(n / 10);
}