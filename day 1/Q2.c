#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter number you want multiplication table for :");
    scanf("%d", &n);
    printf("Enter upto how many term you want table :");
    scanf("%d", &j);

    for(i=1;i<=j;i++)
    {
        printf("%d x %d = %d \t",n,i,n*i);
    
    }
    return 0;
}
