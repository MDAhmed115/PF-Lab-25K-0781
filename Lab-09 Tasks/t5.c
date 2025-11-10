#include <stdio.h>

char items[5][30] = {"Burger", "Pizza", "Pasta", "Sandwich", "Fries"};
int prices[5] = {500, 1200, 800, 400, 300};
int quantities[5] = {0};

void displayMenu() {
    printf("\n=== Restaurant Menu ===\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d] %s - Rs. %d\n", i + 1, items[i], prices[i]);
    }
    printf("[9] Finish Order\n");
}

void takeOrder() {
    int choice, qty;
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 9) break;
        if (choice < 1 || choice > 5) {
            printf("Invalid choice.\n\n");
            continue;
        }
        printf("Enter quantity for %s: ", items[choice - 1]);
        scanf("%d", &qty);
        if (qty < 1) {
            printf("Invalid quantity.\n\n");
            continue;
        }
        quantities[choice - 1] += qty;
        printf("Added %d x %s to order.\n\n", qty, items[choice - 1]);
    }
}

int calculateTotal() {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += prices[i] * quantities[i];
    }
    return total;
}

void printBill() {
    int total = calculateTotal();
    float discount = 0, finalAmount = total;

    printf("\n=== Final Bill ===\n");
    for (int i = 0; i < 5; i++) {
        if (quantities[i] > 0) {
            printf("%s x %d = Rs. %d\n", items[i], quantities[i], prices[i] * quantities[i]);
        }
    }

    if (total > 2000) {
        discount = total * 0.1;
        finalAmount = total - discount;
        printf("\nTotal: Rs. %d", total);
        printf("\nDiscount (10%%): Rs. %.0f", discount);
        printf("\nNet Payable: Rs. %.0f\n", finalAmount);
    } else {
        printf("\nTotal: Rs. %d\n", total);
    }

    printf("\nThank you for your order!\n\n");
}

int main() {
    printf("=== Restaurant Order and Billing System ===\n\n");
    takeOrder();
    printBill();
    return 0;
}
