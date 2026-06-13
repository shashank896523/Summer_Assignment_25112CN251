#include<stdio.h>
int main(){
    int i,n,a[20];
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter array elememt :\n ");
   
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The content of array are :");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}