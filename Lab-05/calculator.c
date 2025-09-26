#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793  // define pi manually

int main() {
    char mode;
    int choice;
    double num, result, num2;

    printf("Select mode (b = Basic, a = Advanced): ");
    scanf(" %c", &mode);

    if (mode == 'b' || mode == 'B') {
        printf("Basic Operations:\n1. Square Root\n2. Power\n3. Logarithm\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%lf", &num);
            if(num >= 0)
                printf("Square root of %.2lf = %.2lf\n", num, sqrt(num));
            else
                printf("Error: Negative number.\n");
        } 
        else if (choice == 2) {
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num, &num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num, num2, pow(num, num2));
        } 
        else if (choice == 3) {
            printf("Enter number: ");
            scanf("%lf", &num);
            if(num > 0)
                printf("Logarithm (base e) of %.2lf = %.2lf\n", num, log(num));
            else
                printf("Error: Non-positive number.\n");
        } 
        else {
            printf("Invalid choice.\n");
        }
    } 
    else if (mode == 'a' || mode == 'A') {
        printf("Advanced Operations:\n1. Sine\n2. Cosine\n3. Tangent\nEnter choice: ");
        scanf("%d", &choice);

        printf("Enter angle in degrees: ");
        scanf("%lf", &num);
        num = num * PI / 180; // convert degrees to radians

        if (choice == 1) {
            printf("sin(%.2lf degrees) = %.2lf\n", num*180/PI, sin(num));
        } 
        else if (choice == 2) {
            printf("cos(%.2lf degrees) = %.2lf\n", num*180/PI, cos(num));
        } 
        else if (choice == 3) {
            printf("tan(%.2lf degrees) = %.2lf\n", num*180/PI, tan(num));
        } 
        else {
            printf("Invalid choice.\n");
        }
    } 
    else {
        printf("Invalid mode.\n");
    }

    return 0;
}
