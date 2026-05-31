#include<stdio.h>
int main()
{
    int i,j,st,end,prime;
    printf("enter range you wnat prime number for");
    printf("\n enter starting number");
    scanf("%d", &st);
    printf("enter ending number");
    scanf("%d", &end);
    for(i=st ; i<=end; i++){
        prime=1;
        if(i <= 1){
         prime=0;
        }
        for(j=2;j<=i/2;j++) {
            if(i%j== 0)
            {
            prime = 0;
            break;
            }
        }
        if(prime==1){
            printf("%d \t",i);
        }
    }
   

}