#include<stdio.h>
int main()
{   int a[50],n,i,j,temp;
    printf("Enter number of elements in array");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {  for(j=0;j<n-1;j++)
        {    if(a[j]>a[j+1])
            {   temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }}
    }
    printf("The sorted array are:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}