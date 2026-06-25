#include<stdio.h>
int main(){
    int a[100],b[100],c[100],i,j,k,n,m;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter 1st array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter another number of elements ");
    scanf("%d",&m);
    printf("Enter 2nd array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m) {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<n)
        c[k++]=a[i++];

    while(j<m)
        c[k++]=b[j++];

    for(i=0;i<n+m;i++){
        printf("after merging the array become %d ",c[i]);
    }
    return 0;
}
    
