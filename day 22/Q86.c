#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    int i,w=1;
    printf("Enter string:");
    gets(s);
    for(i=0;i<strlen(s);i++) {
        if(s[i]==' ')
            w++;
    }
    printf(" The number of words in this string is =%d",w);
    return 0;
}