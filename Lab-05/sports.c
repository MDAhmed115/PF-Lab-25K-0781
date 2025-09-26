#include <stdio.h>

int main() {
    char medicalClearance;
    int age;
    float performance;

    printf("Does the player have medical clearance? (y/n): ");
    scanf(" %c", &medicalClearance);

    if (medicalClearance == 'y' || medicalClearance == 'Y') {
        printf("Enter player's age: ");
        scanf("%d", &age);

        if (age >= 18 && age <= 35) {
            printf("Enter performance score (0-100): ");
            scanf("%f", &performance);

            if (performance > 80) {
                printf("Player Selected!\n");
            } else {
                printf("Not Eligible (Low Performance).\n");
            }
        } else {
            printf("Not Eligible (Age Restriction).\n");
        }
    } else {
        printf("Rejected (No Medical Clearance).\n");
    }

    return 0;
}
