#include<stdio.h>
#include<string.h>
int main(){
    char s[100],t[100];
    printf("Enter string:");
    gets(s);
    strcpy(t,s);
   strrev(t);
 if(strcmp(s,t)==0)
        printf("It's a palindrome string");
    else
        printf("It's not a Palindrome string");
    return 0;
    }