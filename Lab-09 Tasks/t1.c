#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

char items[MAX_ITEMS][30];
float prices[MAX_ITEMS];
int count = 0;

void addItems() {
    int n;
    printf("\nEnter number of items to add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter item name: ");
        scanf("%s", items[count]);
        printf("Enter item price: ");
        scanf("%f", &prices[count]);
        count++;
    }
    printf("\nItems added successfully.\n\n");
}

void fetchList() {
    if (count == 0) {
        printf("\nNo items available.\n\n");
        return;
    }
    printf("\nAvailable items:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, items[i]);
    }
    printf("\n");
}

void editPrice() {
    char name[30];
    int found = 0;
    printf("\nEnter item name to edit price: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(name, items[i]) == 0) {
            printf("Enter new price: ");
            scanf("%f", &prices[i]);
            printf("Price updated successfully.\n\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Item not found.\n\n");
    }
}

void viewAll() {
    if (count == 0) {
        printf("\nNo items available.\n\n");
        return;
    }
    printf("\nAll Items and Prices:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - Rs. %.2f\n", i + 1, items[i], prices[i]);
    }
    printf("\n");
}

void generateReceipt() {
    char name[30];
    int qty, found;
    float total = 0, subtotal = 0;
    char choice = 'y';
    if (count == 0) {
        printf("\nNo items available.\n\n");
        return;
    }
    printf("\n--- Generate Receipt ---\n");
    while (choice == 'y' || choice == 'Y') {
        found = 0;
        printf("Enter item name: ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) {
            if (strcmp(name, items[i]) == 0) {
                printf("Enter quantity: ");
                scanf("%d", &qty);
                subtotal = prices[i] * qty;
                total += subtotal;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Item not found.\n");
        }
        printf("Add more items? (y/n): ");
        scanf(" %c", &choice);
    }
    printf("\nTotal Amount: Rs. %.2f\n", total);
    if (total > 5000) {
        float discount = total * 0.1;
        total -= discount;
        printf("Discount Applied: Rs. %.2f\n", discount);
    }
    printf("Final Bill: Rs. %.2f\n", total);
    printf("Thank you for shopping!\n\n");
}

int main() {
    int choice = 0;
    while (choice != 9) {
        printf("=== Stationery Shop Management System ===\n");
        printf("[1] Add Items and Prices\n");
        printf("[2] Fetch List of Items\n");
        printf("[3] Edit Price of an Item\n");
        printf("[4] View All Items and Prices\n");
        printf("[5] Generate a Receipt\n");
        printf("[9] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addItems();
                break;
            case 2:
                fetchList();
                break;
            case 3:
                editPrice();
                break;
            case 4:
                viewAll();
                break;
            case 5:
                generateReceipt();
                break;
            case 9:
                printf("\nExiting Program...\n");
                break;
            default:
                printf("\nInvalid Input\n\n");
        }
    }
    return 0;
}
