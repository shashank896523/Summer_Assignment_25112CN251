#include<stdio.h>
int per(int n){
    int i,s=0;
for(i=1;i<n;i++){
    if(n%i==0)
      s=s+i;
    }
    if(s==n)
    return 1;
    else
      return 0;
}
int main(){
    int n;
printf("Enter a number: ");
    scanf("%d",&n);
    if(per(n))
        printf("perfect number");
    else
        printf("not a perfect number");
    return 0;
}
