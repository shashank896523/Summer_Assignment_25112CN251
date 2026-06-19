#include<stdio.h>
int main()
{
    int a[100],n,loc,end,beg,mid,i;
    printf("Enter no. of elements in array");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search");
    scanf("%d",&loc);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;

    while(beg<=end && a[mid]!=loc)
    {    if(a[mid]>loc)
        {
            end=mid-1;}
        else if(a[mid]<loc)
            beg=mid+1;
            mid=(beg+end)/2;
    }
    if(a[mid]==loc)
        printf("Found at %d position from the beginning",mid+1);
    else
 printf("Not Found");

    return 0;
}