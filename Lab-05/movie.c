#include <stdio.h>

int main() {
    int age;
    char rating[10];
    char subscription;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Enter movie rating (G, PG-13, R): ");
        scanf("%s", rating);

        if (rating[0] == 'G' || (rating[0] == 'P' && rating[1] == 'G')) {
            printf("Access Granted: You can watch this movie.\n");
        } else {
            printf("Access Denied: Restricted for under 18.\n");
        }
    }
    else {
        printf("Enter subscription type (b = Basic, p = Premium): ");
        scanf(" %c", &subscription);

        if (subscription == 'b' || subscription == 'B') {
            printf("Access Granted: You can watch in Standard Definition (SD).\n");
        } 
        else if (subscription == 'p' || subscription == 'P') {
            printf("Access Granted: You can watch in High Definition (HD).\n");
        } 
        else {
            printf("Invalid subscription type.\n");
        }
    }

    return 0;
}
