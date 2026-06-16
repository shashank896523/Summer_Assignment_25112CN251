#include<stdio.h>
int main(){
    int i,n,a[100],sum=0,j;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
      printf("Enter sum: ");
    scanf("%d",&sum);
    printf("Pairs of sum are:");
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
           if(a[i]+a[j]==sum)
              printf("%d %d\n",a[i],a[j]);

        }
    }
    return 0;

}