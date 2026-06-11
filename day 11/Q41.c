#include<stdio.h>
int sum(int x,int y){
    int z;
    z=x+y;
    return z;
}
int main(){
    int a,b,result;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);
    result=sum(a,b);
    printf("result: %d",result);
    return 0;
}
