#include<stdio.h>
int main(){
    int i,n,count =0,a[100],elem;
    printf("Enter number of elememt :");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element:");
    scanf("%d",&elem);
for(i=0;i<n;i++){
    if(a[i]==elem)
     count++;
    }
  printf("frequency is %d",count);
}