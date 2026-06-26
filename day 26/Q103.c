#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ACCOUNTS 5
struct Acc {
    int accNo;
    char name[30];
    int pin;
    float balance;
};
struct Acc accounts[MAX_ACCOUNTS];
int totalAccounts = 0;
void loadAccounts()     //to lod data from file
 {  FILE *fp = fopen("accounts.dat", "rb");
    if (fp == NULL)     // Default accounts if file doesn't exist
{     accounts[0] = (struct Acc){1001, "X", 1111, 50000};
     accounts[1] = (struct Acc){1008, "Y", 2222, 7000};
    accounts[2] = (struct Acc){1893, "Z", 3333, 9000};
     totalAccounts = 3;
        return;
    }
    while (fread(&accounts[totalAccounts],
      sizeof(struct Acc), 1, fp)) {
        totalAccounts++;
    }
    fclose(fp);
}
void saveAccounts() // to saave data to file
{   FILE *fp = fopen("accounts.dat", "wb");
    for (int i = 0; i < totalAccounts; i++) {
        fwrite(&accounts[i], sizeof(struct Acc), 1, fp);
    }
    fclose(fp);
}
int findAccount(int accNo)// to find account 
 { for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accNo == accNo)
            return i;
    }
    return -1;
}
int login()     // forlogin
 {  int accNo, pin;
printf("=================================\n");
printf("    Welcome to Douglas ATM   \n");
printf("=================================\n");
printf("\nEnter Account Number: ");
scanf("%d", &accNo);
printf("Enter PIN: ");
scanf("%d", &pin);
int index = findAccount(accNo);
 if (index != -1 && accounts[index].pin == pin)
      return index;
 return -1;
}
void checkBalance(int i)        //to check balance of cusomer
 { printf("\nCurrent Balance = Rs %.2f\n",
    accounts[i].balance);}
void deposit(int i)
{ float amount;
  printf("Enter amount to deposit: ");
  scanf("%f", &amount);
  if (amount > 0) {
   accounts[i].balance += amount;
    printf("Deposit successful.\n");    }}

void withdrawMoney(int i)       // to withdraw money
 {  float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > accounts[i].balance)
        printf("Insufficient balance.\n");
    else {
        accounts[i].balance -= amount;
        printf("Withdrawal successful.\n");
   }}
void transferMoney(int sender)  // too transsfer money
{   int receiverAcc;
    float amount;
    printf("Enter receiver account number: ");
    scanf("%d", &receiverAcc);
    int receiver = findAccount(receiverAcc);
    if (receiver == -1) {
    printf("Account not found.\n");
    return;}
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (amount > accounts[sender].balance) {
    printf("Insufficient balance.\n");
    return;}
  accounts[sender].balance -= amount;
  accounts[receiver].balance += amount;
  printf("Transfer successful.\n");
}
void displayAccounts()     // View all accounts
{  printf("\n----- Accounts -----\n");
   for (int i = 0; i < totalAccounts; i++) {
    printf("Account No: %d\n", accounts[i].accNo);
    printf("Name      : %s\n", accounts[i].name);
    printf("Balance   : Rs %.2f\n\n",
    accounts[i].balance);
    }}
int main()
 { int choice;
    loadAccounts();
    int user = login();
    if (user == -1) {
        printf("\nInvalid Account Number or PIN.\n");
        return 0; }
    printf("\nWelcome %s!\n", accounts[user].name);
    do {
        printf("\n=====ATM MENU =====\n");
        printf("1.Check you're current Balance\n");
        printf("2.Deposit money\n");
        printf("3.Withdraw money\n");
        printf("4.Transfer money\n");
        printf("5.View all accounts\n");
        printf("6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            checkBalance(user);
            break;
        case 2:
            deposit(user);
            saveAccounts();
            break;
        case 3:
            withdrawMoney(user);
            saveAccounts();
            break;
        case 4:
            transferMoney(user);
            saveAccounts();
            break;
        case 5:
            displayAccounts();
            break;
        case 6:
            printf("\nThank you for using ATM! please visit again :) \n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 6);
    return 0;
}