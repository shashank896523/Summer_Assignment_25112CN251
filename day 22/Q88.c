#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    int i,j=0;
    printf("Enter a string");
    gets(s);
    for(i=0;i<strlen(s);i++) {
         if(s[i]!=' ') {
          s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
    printf("After removing spaces the word is %s",s);
    return 0;
}