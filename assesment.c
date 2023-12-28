#include <stdio.h>

// Function to display food items
void displayFoodItems() {
    printf("\n=== Menu ===\n");
    printf("1. Pizza - price = 180rs/pcs\n");
    printf("2. Burger - price = 100rs/pcs\n");
    printf("3. Dosa - price = 120rs/pcs\n");
    printf("4. Idli - price = 50rs/pcs\n");
	printf("==================\n");
}

int main() {
    // Variables to store user input
    int choice, quantity;
    char option;

    // Variables to store total bill
    double totalBill = 0.0;

    do {
        // Display available food items
        displayFoodItems();

        // Get user input for food choice
        printf("\nPlease Enter your choose...: ");
        scanf("%d", &choice);
        
        printf("\nYou have selected %d\n",choice);

        // Get user input for quantity
        printf("\nEnter the quantity: ");
        scanf("%d", &quantity);

        // Business logic: Calculate and display current order cost
        switch (choice) {
            case 1:
                totalBill += quantity * 180.00;
                break;
            case 2:
                totalBill += quantity * 100.00;
                break;
            case 3:
                totalBill += quantity * 120.00;
                break;
             case 4:
                totalBill += quantity * 50.00;
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }

        // Display current order cost
        printf("Current order cost: Rs%.2f\n", totalBill);

        // Ask the user if they want to order more
        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &option);

    } while (option == 'y' || option == 'Y');

    // Display final bill
    printf("\n=== Final Bill ===\n");
    printf("Total Bill: Rs%.2f\n", totalBill);

   
}

