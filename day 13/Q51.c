#include<stdio.h>
int main(){
    int i,n,a[100],small,large;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    small =a[0];
    large=a[0];
    for(i=0;i<n;i++){
        if (a[i]<small)
        small=a[i];
            if(a[i]>large)
            large=a[i];
    }
    printf("The smallest number in array is %d \n",small);
    printf("The largest number in araay is %d",large);
    return 0;
}