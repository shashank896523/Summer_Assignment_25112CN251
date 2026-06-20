#include<stdio.h>
int main() {
    int a[20][20],n,m,i,j,sum=0;
    printf("Enter rows and columns: ");
    scanf("%d%d",&n,&m);
 printf("Enter matrix:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
     } }
     for(j=0;j<m;j++) {
        sum=0;
        for(i=0;i<n;i++)
        { sum += a[i][j];
        }
        printf("Sum of Column is %d=%d \n",j+1,sum);
    }
    return 0;
}