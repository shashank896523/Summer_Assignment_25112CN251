#include<stdio.h>
#include<string.h>
int main() {
    char name[5][20],temp[20];
    int i,j,n;
    printf("Enter number of names to be sorted\n");
    scanf("%d",&n);
    printf("Enter names\n:");
    for(i=0;i<n+1;i++)
        gets(name[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n+1;j++) {
            if(strcmp(name[i],name[j])>0) {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("\nSorted Names are as follows:\n");
    for(i=0;i<=n;i++)
        puts(name[i]);
    return 0;
}