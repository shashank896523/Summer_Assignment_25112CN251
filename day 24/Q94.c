#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    int i,cnt;
    printf("Enter a string:\n");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        cnt=1;
        while(st[i]==st[i+1])
        {
            cnt++;
            i++;
        }
        printf("%c occured %d times in the given string\t",st[i],cnt);
    }
    
}