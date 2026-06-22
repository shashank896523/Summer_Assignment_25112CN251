#include<stdio.h>
#include<string.h>
int main() {
    char s1[100],s2[100];
    int i,j,temp;
    printf("Enter a string\n");
    gets(s1);
    printf("Enter another string\n");
    gets(s2);
    if(strlen(s1)!=strlen(s2)) {
        printf("It's not an Anagram string :(");
        return 0;
    }
    for(i=0;i<strlen(s1)-1;i++) {
        for(j=i+1;j<strlen(s1);j++) {
            if(s1[i]>s1[j]) {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            if(s2[i]>s2[j]) {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }
    if(strcmp(s1,s2)==0)
        printf("It's an Anagram string :)");
    return 0;
}