#include<stdio.h>
#include<string.h>
int main() {
    char s[100],ch;
    int i,cnt=0;
    printf("Enter string");
    gets(s);
    printf("Enter character to searched for:");
    scanf("%c",&ch);
    for(i=0;i<strlen(s);i++) {
        if(s[i]==ch)
            cnt++;
    }
    printf("Frequency=%d",cnt);
    return 0;
}