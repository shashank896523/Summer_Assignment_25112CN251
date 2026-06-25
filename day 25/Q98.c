#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s2[100];
    int i,j;
    printf("Enter a string:");
    gets(s);
    printf("Enter another string:");
    gets(s2);
    for(i=0;i<strlen(s);i++){
        for(j=0;j<strlen(s2);j++){
            if(s[i]==s2[j]){
                printf("%c",s[i]);
                break;
            }
        }
    }
    return 0;
}