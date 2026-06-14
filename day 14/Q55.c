#include<stdio.h>
int main(){
    int i,n,seclarge,large,a[100],elem;
    printf("Enter number of elememt :");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large=a[0];
    seclarge=a[0];
    for(i=0;i<n;i++){
    if(a[i]>large){
        seclarge = large;
        large=a[i];
    }
    else if(a[i]>seclarge && a[i]!=large){
        seclarge=a[i];
    }
}
    printf("Second largest = %d",seclarge);
    return 0;
}