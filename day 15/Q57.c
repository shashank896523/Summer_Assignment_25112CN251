#include<stdio.h>
int main(){
    int i,n,a[100],temp;
    printf("Enter no. of element: ");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        temp= a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    
    }
    printf("reversed array is");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}