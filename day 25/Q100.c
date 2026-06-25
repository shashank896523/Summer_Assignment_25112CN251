#include<stdio.h>
#include<string.h>
int main() {
    char word[20][20], temp[20],choice[4];
    int i,j,n;
    printf("Enter number of words:\n");
    scanf("%d",&n);
    getchar();
    printf("Enter words:\n");
    for(i=0;i<n;i++)
        gets(word[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("Enter asc for ascending order or des for descending order: ");
    scanf("%s",choice);
    if(strcmp(choice,"asc")==0) {
        printf("\nThe words in the ascending order are as follows:\n");
        for(i=0;i<n;i++)
            puts(word[i]);
    }
    else if(strcmp(choice,"des")==0) {
        printf("\nThe words in the descending order are as follows:\n");
        for(i=n-1;i>=0;i--)
            puts(word[i]);
    }

    return 0;
}