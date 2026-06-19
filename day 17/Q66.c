#include<stdio.h>
int main()
{   int a[100],b[100],u[100],n1,n2,i,j,k=0,flag;
    printf("enter number of element in 1st array");
    scanf("%d",&n1);
    printf("Enter array");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter number of element in 2nd array");
    scanf("%d",&n2);
    printf("Enter array");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        u[k++]=a[i];

    for(i=0;i<n2;i++)
    {
        flag=0;

        for(j=0;j<k;j++)
        {
            if(b[i]==u[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            u[k++]=b[i];
    }
    printf("Union of these arrays are:\n");
    for(i=0;i<k;i++){
         printf("%d ",u[i]);

    }
       
    return 0;
}