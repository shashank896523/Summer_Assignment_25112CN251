#include<stdio.h>
int main()
{   int ch;
    float x,y;
    do
    {
        printf("\n----- M E N U-----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {       case 1:
                printf("Enter two numbers: ");
                scanf("%f%f",&x,&y);
                printf("Sum of the numbers are:= %.2f\n",x+y);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f%f",&x,&y);
                printf("Difference of the numbers are:= %.2f\n",x-y);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f%f",&x,&y);
                printf("Product of the numbers are:= %.2f\n",x*y );
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f%f",&x,&y);
                if(y!=0)
                    printf("Quotient of the numbers are:= %.2f\n",x/y);
                else
                    printf("Division by zero not possible.\n");
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }while(ch!=5);
    return 0;
}