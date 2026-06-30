#include<stdio.h>
#include<string.h>

struct bank
{
    char name[50];
    int accountno;
    float balance;
};

int main()
{
    struct bank customer;
    int choice;
    float amount;

    printf("=========== BANK ACCOUNT SYSTEM ===========\n");

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]",customer.name);

    printf("Enter Account Number: ");
    scanf("%d",&customer.accountno);

    printf("Enter Initial Balance: ");
    scanf("%f",&customer.balance);

    while(1)
    {
        printf("\n========== MENU ==========\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f",&amount);

                customer.balance+=amount;

                printf("Amount Deposited Successfully.\n");
                printf("Current Balance : %.2f\n",customer.balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f",&amount);

                if(amount<=customer.balance)
                {
                    customer.balance-=amount;
                    printf("Amount Withdrawn Successfully.\n");
                    printf("Current Balance : %.2f\n",customer.balance);
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance : %.2f\n",customer.balance);
                break;

            case 4:
                printf("\n------ ACCOUNT DETAILS ------\n");
                printf("Account Holder : %s\n",customer.name);
                printf("Account Number : %d\n",customer.accountno);
                printf("Balance : %.2f\n",customer.balance);
                break;

            case 5:
                printf("Thank You For Using Our Bank.\n");
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }

    return 0;
}