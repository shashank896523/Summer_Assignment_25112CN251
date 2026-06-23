#include<stdio.h>
#include<string.h>
int main(){
    char st[100],wrd[10],lng[10];
    int i=0,j=0,max=0;
    printf("Enter a string:\n");
    gets(st);
    while(1){
        if(st[i]!=' ' && st[i]!='\0')
        {
            wrd[j++]=st[i];
        }
        else{
            wrd[j]='\0';
            if(strlen(wrd)>max)
            {
                max=strlen(wrd);
                strcpy(lng , wrd);
            }
            j=0;
        }
        if(st[i]=='\0')
        break;
        i++;
    }
    printf("The longest word in the given string = %s", lng);
    return 0;
}