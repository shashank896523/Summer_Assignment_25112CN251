#include<stdio.h>

int main()
{
    int a[50],b[50],n1,n2,i,j;
    printf("Enter no. of element in 1st array");
    scanf("%d",&n1);
    printf("Enter array");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter number of element in 2nd array");
    scanf("%d",&n2);
    printf("Enter 2nd array");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    printf("Intersection  of these array are:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {   if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }

    return 0;
}