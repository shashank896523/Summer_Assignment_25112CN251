#include<stdio.h>
#include<string.h>
int main(){
char st1[100],st2[100],temp[200];
printf("Enter a string:\n");
gets(st1);
printf("Enter another string:\n");
gets(st2);
strcpy(temp,st1);
strcat(temp,st1);
if(strstr(temp,st2))
    printf("Rotation");
else 
printf("not a rotation");
return 0;
}