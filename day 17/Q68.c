#include<stdio.h>

int main()
{
    int a[50],b[50],n,x,i,j;
    printf("Enter no. of element in 1st array");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter number of element in 2nd array");
    scanf("%d",&x);
    printf("Enter 2nd array");
    for(i=0;i<x;i++)
        scanf("%d",&b[i]);
    printf("Common element of these array are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<x;j++)
        {   if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }

    return 0;
}