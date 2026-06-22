#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i,j,count;
    printf("Enter a string\n");
    gets(str);
    for(i=0;i<strlen(str);i++) {
        count=0;
        for(j=0;j<strlen(str);j++) {
            if(str[i]==str[j])
                count++;
        }
        if(count==1) {
            printf("the first non repeating character is %c",str[i]);
            break;
        }
    }
    return 0;
}