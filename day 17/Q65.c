#include<stdio.h>
int main()
{
    int i,a[100],b[100],c[100],n1,n2;;
    printf("Enter number of elements:");
    scanf("%d",&n1);
    printf("Enter array");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter number of elements in second array:");
    scanf("%d",&n2);
    printf("Enter array");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    for(i=0;i<n1+n2;i++){
        printf("%d",c[i]);
    }
    return 0;
}
