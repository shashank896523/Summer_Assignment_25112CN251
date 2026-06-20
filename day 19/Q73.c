#include<stdio.h>
int main(){
    int i,j,n=3,m=3,sum=0,a[3][3],b[3][3];
    printf("Enter elements in matrix:");
    printf("Enter 1st matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }}
        printf("ENter 2nd matrix:\n");
   for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
    }}
        //add
sum = a[i][j]+b[i][j];
printf("The sum of matrix is %d",sum);
return 0;
 }