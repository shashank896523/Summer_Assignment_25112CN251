#include<stdio.h>
int main(){
    int bin,r,dec=0,base=1;
    printf("enter a binary number:");
    scanf("%d",&bin);
    printf("The decimal of number%d is",bin);
    while(bin>0){
        r=bin%10;
        dec= dec+r*base;
        base=base*2;
        bin=bin/10;
    }
    printf("\n %d",dec);
}