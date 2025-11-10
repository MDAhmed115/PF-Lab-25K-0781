#include <stdio.h>

float calculateDiscount(float total) {
    if (total > 5000)
        return total * 0.20;
    else if (total >= 3000)
        return total * 0.10;
    else
        return 0;
}

int main() {
    float price, total = 0, discount, finalAmount;
    printf("=== Shopping Discount Calculator ===\n\n");
    printf("Enter the prices of items (enter 0 to stop):\n");

    while (1) {
        printf("Enter item price: ");
        scanf("%f", &price);
        if (price == 0)
            break;
        total += price;
    }

    discount = calculateDiscount(total);
    finalAmount = total - discount;

    printf("\n=== Bill Summary ===\n");
    printf("Total Purchase Amount: Rs. %.2f\n", total);
    printf("Discount Applied: Rs. %.2f\n", discount);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);

    return 0;
}
