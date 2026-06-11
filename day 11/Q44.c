#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
    return 1;
else
return n*fact(n-1);
}
int main(){
    int z;
    printf("Enter a number");
    scanf("%d",&z);
    printf("factorial=%d",fact(z));
    return 0;
}