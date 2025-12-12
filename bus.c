#include <stdio.h>

int main() {
    int choice, seats;
    float totalFare = 0;

    while (1) {
        printf("\n--- Bus Ticket Booking System ---\n");
        printf("1. Chennai ? Bangalore (? 500 per seat)\n");
        printf("2. Chennai ? Coimbatore (? 400 per seat)\n");
        printf("3. Chennai ? Madurai (? 350 per seat)\n");
        printf("4. Generate Bill & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("\nTotal Fare : ? %.2f\n", totalFare);
            printf("Tickets Booked Successfully!\n");
            printf("Thank You! Happy Journey! ???\n");
            break;
        }

        printf("Enter Number of Seats: ");
        scanf("%d", &seats);

        switch(choice) {
            case 1:
                totalFare += seats * 500;
                printf("Booked Chennai ? Bangalore!\n");
                break;

            case 2:
                totalFare += seats * 400;
                printf("Booked Chennai ? Coimbatore!\n");
                break;

            case 3:
                totalFare += seats * 350;
                printf("Booked Chennai ? Madurai!\n");
                break;

            default:
                printf("Invalid Option! Try Again.\n");
        }
    }

    return 0;
}

