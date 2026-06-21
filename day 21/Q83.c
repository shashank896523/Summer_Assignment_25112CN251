#include<stdio.h>
int main(){
     char str[100];
    int i = 0,v=0,con=0;
    printf("Enter string: ");
    gets(str);
  while(str[i] != '\0') {
       if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
        {   if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='O'||str[i]=='E'||str[i]=='U'||str[i]=='I')
                v++;
            else
                con++;
        }
        i++;
    }
    printf("Vowels = %d\n", v);
    printf("Consonants = %d", con);

}