#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, sum;
    float quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %f\n", (float)num1 / num2);
    return 0;
}