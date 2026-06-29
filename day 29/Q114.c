#include<stdio.h>
int main()
{
    int a[36],n,i,choice;
    int sum=0,large,small;
    printf("ENter number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter array:\n");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    do
    {   printf("\n-- M E N U-----\n");
        printf("1. Display the Array\n");
        printf("2. Sum of elements of array\n");
        printf("3. Largest element in the array\n");
        printf("4. Smallest element in the array\n");
        printf("5. Exit\n");
        printf("Enter you're Choice: ");
        scanf("%d",&choice);
        switch(choice)
        { case 1:
             printf("Array is as follow: ");
             for(i=0;i<n;i++){
             printf("%d ",a[i]);
             }
             printf("\n");
              break;
           case 2:
             sum=0;
             for(i=0;i<n;i++){
                  sum+=a[i];
                }
                printf("Sum = %d\n",sum);
                break;
        case 3:
             large=a[0];
                for(i=1;i<n;i++)
                {
                    if(a[i]>large)
                        large=a[i];
              }
                printf("Largest = %d\n",large);
                break;
            case 4:
                small=a[0];
                for(i=1;i<n;i++)
                {
                    if(a[i]<small)
                        small=a[i];
                }
                printf("Smallest = %d\n",small);
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("You're choice is invalid!\n");
       }
    }while(choice!=5);

    return 0;
}