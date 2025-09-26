#include <stdio.h>

int main() {
    char vehicle;
    int violation;
    int fine = 0;

    printf("Enter vehicle type (c = Car, m = Motorcycle, t = Truck): ");
    scanf(" %c", &vehicle);

    switch (vehicle) {
        case 'c':
        case 'C':
            printf("Select violation (1 = Overspeeding, 2 = Signal Breaking, 3 = Wrong Parking): ");
            scanf("%d", &violation);

            switch (violation) {
                case 1: fine = 3000; break;
                case 2: fine = 5000; break;
                case 3: fine = 2000; break;
                default: printf("Invalid violation.\n"); return 0;
            }
            printf("Fine for Car: Rs. %d\n", fine);
            break;

        case 'm':
        case 'M':
            printf("Select violation (1 = Overspeeding, 2 = Signal Breaking, 3 = Wrong Parking): ");
            scanf("%d", &violation);

            switch (violation) {
                case 1: fine = 2000; break;
                case 2: fine = 4000; break;
                case 3: fine = 1000; break;
                default: printf("Invalid violation.\n"); return 0;
            }
            printf("Fine for Motorcycle: Rs. %d\n", fine);
            break;

        case 't':
        case 'T':
            printf("Select violation (1 = Overspeeding, 2 = Signal Breaking, 3 = Wrong Parking): ");
            scanf("%d", &violation);

            switch (violation) {
                case 1: fine = 8000; break;
                case 2: fine = 10000; break;
                case 3: fine = 5000; break;
                default: printf("Invalid violation.\n"); return 0;
            }
            printf("Fine for Truck: Rs. %d\n", fine);
            break;

        default:
            printf("Invalid vehicle type.\n");
    }

    return 0;
}
