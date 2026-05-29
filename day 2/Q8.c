#include<stdio.h>
int main(){
    int n,r,temp,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r = n%10;
        rev = rev*10+r;
        n=n/10;
    }
    if(temp==rev){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}