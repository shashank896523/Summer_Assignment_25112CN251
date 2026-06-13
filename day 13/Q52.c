#include<stdio.h>
int main(){
   int i,n,a[100],even =0,odd=0;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("enter elements of array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        even++;
    else
    odd++;
     }
     printf("The number of even element=%d \n",even);
     printf("The number of odd element = %d \n",odd);
     return 0;
}