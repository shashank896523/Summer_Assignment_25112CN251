#include<stdio.h>
int main(){
    int i,n,loc =-1,a[100],elem;
    printf("Enter number of elememt :");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched:");
    scanf("%d",&elem);
for(i=0;i<n;i++){
    if(a[i]==elem)
    {  loc=i+1;
         printf("element is found at %d location",loc);
         break;
    }
}
if(loc =-1)
printf(" search is unsuccesful:");
return 0;
}