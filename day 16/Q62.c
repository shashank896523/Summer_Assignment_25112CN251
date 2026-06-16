#include<stdio.h>
int main(){
    int i,n,j,a[100],elem,maxfrq=0;
    printf("Enter number of elememt :");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
  int count=0;
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        count++;
    }
    if(count>maxfrq)
    {
       maxfrq=count;
        elem=a[i];
    }
}

  printf("The maximum frequency of element %d is %d",elem,maxfrq);
  return 0;
}