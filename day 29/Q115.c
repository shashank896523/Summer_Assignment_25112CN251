#include<stdio.h>
#include<string.h>
int main()
{  char str1[50],str2[50];
    int choice;
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    do{
        printf("\n--- M e n u ----\n");
        printf("Choose the option you want to know for string \n");
        printf("1. For string length\n");
        printf("2. For copying the string\n");
        printf("3. For comparing the srtring\n");
        printf("4. For reversing the string\n");
        printf("5. Exit\n");
         printf("Enter choice:\n ");
        scanf("%d",&choice);
        switch(choice)
            {   case 1:
                printf("Length = %lu\n",strlen(str1));
                break;
            case 2:
                strcpy(str2,str1);
                printf("Copied String = %s\n",str2);
                break;
            case 3:
                if(strcmp(str1,str2)==0)
                    printf("Both strings are equal\n");
                else
                    printf("Both strings are not equal\n");
                break;
            case 4:
                strrev(str1);
                printf("Reverse = %s\n",str1);
                break;
                default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}