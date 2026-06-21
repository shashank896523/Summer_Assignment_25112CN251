#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    strupr(str);
    printf("%s",str);
    return 0;
}