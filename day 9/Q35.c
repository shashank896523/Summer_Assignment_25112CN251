#include<stdio.h>
int main(){
    int i,j;
     int x=65; 
       for(i=1;i<=5;i++){
                                //dec x only here as to inc val while loop is going.
        for(j=1;j<=i;j++){
            printf("%c",x);
           
        }
        printf("\n");
         x++;
    }
    return 0;
}