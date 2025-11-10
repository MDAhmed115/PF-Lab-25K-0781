#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    printf("=== Swap Two Numbers Using Pointers ===\n\n");

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter Swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}
