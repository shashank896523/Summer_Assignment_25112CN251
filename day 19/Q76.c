#include<stdio.h>
int main() {
    int a[10][10],n,i,j,sum=0;
     printf("Enter number of rows and columns of square matrix: ");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<n;i++) {
         sum += a[i][i];
    }
  printf("Diagonal sum of the matrix is=%d",sum);
    return 0;
}