#include<stdio.h>
int main(){
    int i,n,sum=0,a[100],total;
    printf("Enter last number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    total= n*(n+1)/2;
    printf("Missing number = %d", total-sum);
    return 0;
}
  