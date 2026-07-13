#include <stdio.h>

int main() {
    int seats = 10;
    int choice, book;

    do {
        printf("\nAvailable Seats: %d", seats);
        printf("\n1. Book Ticket");
        printf("\n2. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("How many seats? ");
                scanf("%d", &book);

                if(book <= seats) {
                    seats -= book;
                    printf("Booking Successful\n");
                } else {
                    printf("Seats Not Available\n");
                }
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 2);

    return 0;
}