#include<stdio.h>
#include<string.h>
int main() {
    char str[100],mchar;
    int i,j,count,m=0;
    printf("Enter a string\n");
    gets(str);
    for(i=0;i<strlen(str);i++) {
        count=0;
        for(j=0;j<strlen(str);j++) {
            if(str[i]==str[j])
                count++;
        }
        if(count>m) {
            m=count;
            mchar=str[i];
        }
    }
printf(" THe maximum occurring character in the string is=%c",mchar);
    return 0;
}