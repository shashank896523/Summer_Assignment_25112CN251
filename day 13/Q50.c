#include<stdio.h>
int main(){
    int i,n,a[20],s=0;
    float avg;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("the elements of array are:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    avg =(float)s/n;
    printf("sum of array is %d",s);
    printf("\n average of these array are %0.2f",avg);
    return 0;
}   