#include <stdio.h>

int main() {
    int choice, qty;
    float bill = 0;

    while (1) {
        printf("\n--- Online Food Ordering System ---\n");
        printf("1. Pizza - ?150\n");
        printf("2. Burger - ?80\n");
        printf("3. Fried Rice - ?120\n");
        printf("4. Chicken Roll - ?100\n");
        printf("5. Generate Bill & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nTotal Bill: ? %.2f\n", bill);
            printf("Thank You! Visit Again!\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter Quantity: ");
                scanf("%d", &qty);
                bill += 150 * qty;
                printf("Item Added!\n");
                break;

            case 2:
                printf("Enter Quantity: ");
                scanf("%d", &qty);
                bill += 80 * qty;
                printf("Item Added!\n");
                break;

            case 3:
                printf("Enter Quantity: ");
                scanf("%d", &qty);
                bill += 120 * qty;
                printf("Item Added!\n");
                break;

            case 4:
                printf("Enter Quantity: ");
                scanf("%d", &qty);
                bill += 100 * qty;
                printf("Item Added!\n");
                break;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }
    return 0;
}


