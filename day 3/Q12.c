#include<stdio.h>
int main(){
    int i,x,y,gcd,lcm;
    printf("enter any two number\n");
    scanf("\n%d \n%d", &x,&y);
    for(i=1;i<=x && i<=y;i++){
       if(x%i==0 && y%i==0){
        gcd = i;
       }
    }
    lcm = (x*y)/gcd;
    printf("The LCM of two number %d and %d is %d",x,y,lcm); 
    return 0;
}
