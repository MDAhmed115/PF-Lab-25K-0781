#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char specials[] = {'#', '$', '%', '&', '@', '!', '*', '+', '-', '?'};
char password[100];

void generatePassword(char name[], char contact[], int minLen, int digits, int specialsCount) {
    int i, len = 0;
    srand(time(NULL));
    int nameLen = strlen(name);
    int contactLen = strlen(contact);

    for (i = 0; i < 2 && i < nameLen; i++) {
        password[len++] = name[i];
    }
    for (i = contactLen - 4; i < contactLen; i++) {
        if (i >= 0) password[len++] = contact[i];
    }
    for (i = 0; i < digits; i++) {
        password[len++] = '0' + rand() % 10;
    }
    for (i = 0; i < specialsCount; i++) {
        password[len++] = specials[rand() % 10];
    }
    while (len < minLen) {
        password[len++] = 'a' + rand() % 26;
    }
    password[len] = '\0';
}

int main() {
    char name[50], gender[10], contact[20];
    int minLen, digits, specialsCount;

    printf("=== Secure Password Generator ===\n\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your contact number: ");
    scanf("%s", contact);
    printf("Enter minimum password length: ");
    scanf("%d", &minLen);
    printf("Enter number of digits: ");
    scanf("%d", &digits);
    printf("Enter number of special characters: ");
    scanf("%d", &specialsCount);

    generatePassword(name, contact, minLen, digits, specialsCount);

    printf("\nGenerated Password: %s\n\n", password);
    return 0;
}
