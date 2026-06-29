#include<stdio.h>
#include<string.h>
struct ticket{
    char Destination[30];
    int booking_id;
    char Name[30];
    int Seat_No;
    int date; 
}S1;
int main(){
    printf("Enter you're name:\n");
    scanf("%s",S1.Name);
    printf("Enter you're seat number:\n");
    scanf("%d",&S1.Seat_No);
    printf("Enter you're destination:\n");
    scanf("%s",S1.Destination);
    printf("Enter you're booking id:\n");
    scanf("%d",&S1.booking_id);
    printf("Enter you're date:\n");
    scanf("%d",&S1.date);
    printf("\n");
    printf("Ticket Detail");
    printf("Passenger name is : %s\n",S1.Name);
    printf("Passenger seat number is : %d\n",S1.Seat_No);
    printf(" Passenger destination is : %s\n",S1.Destination);
    printf("passenger booking ID : %d\n",S1.booking_id);
    printf("passager journey date is : %d\n",S1.date);
}