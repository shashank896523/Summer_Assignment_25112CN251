#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    strrev(str);
    printf("Reverse of the string is %s",str);
    return 0;
}