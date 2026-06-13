#include<stdio.h>
int pal(int n){
    int rev=0,r,temp;
    temp=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    return 1;
else
return 0;
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(pal(n))
    printf("palindrome number");
    else
    printf("not a palindrome");
    return 0;
}