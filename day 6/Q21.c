#include<stdio.h>
int main(){
    int n,j,bin[32],i=0;
    printf("Enter a decimal no.");
    scanf("%d",&n);
    printf("The binary of number %d is",n);
    while(n>0){
        bin[i]=n%2;
        n=n/2;
        i=i+1;
    }
    
    for(j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
}