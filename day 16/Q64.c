//compare elem+shifting for this typo 
#include<stdio.h>
int main() {
    int a[100],n,i,j,l;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                for(l=j;l<n-1;l++)
                    a[l]=a[l+1];
                n--;
                j--;
            }}
    }
printf("Array after removing duplicates:\n");
for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}