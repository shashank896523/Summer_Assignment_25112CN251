#include<stdio.h>
int main(){
    int guess,i,no=29;
    do{
      printf("Guess a number between 1-50");
    printf("\n Enter the number:");
    scanf("%d",&i);
    if(i>no)
    printf("Oops :( The number is too high");
    else if(i<no)
    printf("Oops :( The number is too low");
    } while(i!=no);{
        printf("Congrats :) It's a correct number");
    }
}