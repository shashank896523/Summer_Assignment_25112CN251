#include<stdio.h>
#include<math.h>
int main(){
    int n,r,num=0,result,temp,st,end;
    printf("Enter number in a range for printing armstrong numbers: ");
    printf("\n Enter sarting range");
    scanf("%d",&st);
    printf("\n Enter ending range");
    scanf("%d",&end);
    for(n=st;n<=end;n++){
        temp=n;
        result=0;
        num=0;
        int t=temp;
        while(t!=0)
        {  t/=10;
             num++;
        }
        t=temp;
        while(t!=0){
            r=t%10;
            result+=pow(r,num);
            t/=10;
        }
        if(result==n){
            printf("%d ",n);
        }
    }
}

