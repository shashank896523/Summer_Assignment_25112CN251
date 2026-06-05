#include <stdio.h>
int main() {
    int n,s=0,d,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(temp==s){
        printf("armstrong number");}
        else
        printf("not an armstrong number");      
    return 0;
}