#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    int i,j,dup;
    printf("Enter a string:\n");
    fgets(st,sizeof(st),stdin);
    for(i=0;i<strlen(st);i++)
    {
        dup=0;
        for(j=0;j<i;j++){
            if(st[i]==st[j]){
                dup=1;
                break;
            }
        }
        if(dup==0)
        printf("%c",st[i]);
    }
    return 0;
}