#include<stdio.h>
int main(){
    int i,j,n,a[20];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("ENter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]!=0) {
            a[j]=a[i];
            j++;
        }    }
    while(j<n) {
        a[j]=0;
        j++;
    }
    printf("the requird array is ");
     for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
