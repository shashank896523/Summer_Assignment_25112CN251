#include<stdio.h>
int main(){
   int ans,score=0;
    printf("What does OS stand for?\n");
    printf("1.Operating System 2.Operation System 3.Opening Station 4.Operating Station\n");
    scanf("%d",&ans);
printf("");
    if(ans==1)
 {       score++;
         printf("Congrats its a correct answer <: you'r score = %d",score);
}
    if(ans ==2||ans==3||ans==4)
    {    score--;
    printf("Oops! :< that's incorrect your score = %d",score);
    }
    return 0;
}
