#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char correctUsername[] = "user123";
    char correctPassword[] = "pass123";
    char twoFactor;
    char enteredOTP[10], correctOTP[] = "7890";

    printf("Enter username: ");
    scanf("%s", username);

    if (strcmp(username, correctUsername) == 0) {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0) {
            printf("Is two-factor authentication enabled? (y/n): ");
            scanf(" %c", &twoFactor);

            if (twoFactor == 'y' || twoFactor == 'Y') {
                printf("Enter OTP: ");
                scanf("%s", enteredOTP);

                if (strcmp(enteredOTP, correctOTP) == 0) {
                    printf("Access Granted.\n");
                } else {
                    printf("Access Denied: Incorrect OTP.\n");
                }
            } else {
                printf("Access Granted.\n");
            }
        } else {
            printf("Access Denied: Incorrect password.\n");
        }
    } else {
        printf("Access Denied: Username not found.\n");
    }

    return 0;
}
