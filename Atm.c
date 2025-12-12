#include <stdio.h>

int main() {
    int pin, option;
    float balance = 10000.00; 
    float amount;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Invalid PIN! Access Denied.\n");
        return 0;
    }

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Amount\n");
        printf("3. Withdraw Amount\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Current Balance: ? %.2f\n", balance);
                break;

            case 2:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdraw Successful!\n");
                }
                break;

            case 4:
                printf("Thank You for Using ATM!\n");
                return 0;

            default:
                printf("Invalid Option! Try Again.\n");
        }
    }

    return 0;
}

