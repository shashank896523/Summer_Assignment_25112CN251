#include<stdio.h>
int main(){
    int i,a,b,result=1;
    printf("Enter base:");
    scanf("%d",&a);
    printf("\nEnter power:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        result=result*a;
    }
    printf("%d to power %d is %d",a,b,result);
}