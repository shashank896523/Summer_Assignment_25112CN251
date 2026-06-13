#include<stdio.h>
int arm(int n){
    int temp,d,s=0;
     temp = n;
    while(n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(temp==s)
        return 1;
        else
       return 0; 
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(arm(n))
    printf("armstrong number");
else 
printf("not an armstrong number");
return 0;
}