#include <stdio.h>
float balance = 0; // You have to deposit first in this system
char name[50];
void deposit(float amount)
{
    if (amount > 0)
    {
        balance += amount;
        printf("diposited %.2f\n", amount);
    }
    else
    {
        printf("invalid balance\n");
    }
}
void withdraw(float amount)
{
    if (amount > 0)
    {
        balance -= amount;
        printf("withdrew %.2f\n", amount);
    }
    else
    {
        printf("withdrawal is cancelled\n");
    }
}

void checkbalance(float balance)
{
    printf("your balace in this account is %.2f\n", balance);
}

int main()
{
    int choice;
    int accountnumber;
    float amount;
    printf("enter your name first: \n");
    fgets(name, sizeof(name), stdin);
    printf("welcome, %s\n", name);
    printf("please enter your account number: \n");
    scanf("%d", &accountnumber);
    while (1)
    {

        printf("SIMPLE BANK SYSTEM\n");
        printf("1. deposit\n");
        printf("2. withdrawl\n");
        printf("3. check balance\n");
        printf("4. exit\n");
        printf("enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter amount to deposit: \n");
            scanf("%f", &amount);
            deposit(amount);
            break;
        case 2:
            printf("enter amount to withdraw: \n");
            scanf("%f", &amount);
            withdraw(amount);
            break;
        case 3:
            printf("your balance is %.2f\n", balance);
            break;
        case 4:
            printf("quiting the bank system\n");

            return 0;

        default:
            printf("invalid choice please try again\n");
            break;
        }
    }
    return 0;
}