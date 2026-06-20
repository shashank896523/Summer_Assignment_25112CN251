#include<stdio.h>
int main(){
    int i,j,n=3,m=3,a[3][3],trans[3][3];
       printf("Enter matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }}
        //transpose
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                trans[j][i]=a[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d \t",trans[i][j]);
            }
            printf("\n");
        }
return 0;
 }