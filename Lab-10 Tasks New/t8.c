#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char names[50][50], emails[50][100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter full name of student %d: ", i + 1);
        fgets(names[i], 50, stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < n; i++) {
        char email[100] = "";
        int j = 0;
        while (names[i][j] != '\0') {
            char ch = names[i][j];
            if (ch == ' ') strcat(email, ".");
            else {
                char lower = tolower(ch);
                int len = strlen(email);
                email[len] = lower;
                email[len + 1] = '\0';
            }
            j++;
        }
        strcat(email, "@nu.edu.pk");
        strcpy(emails[i], email);
    }

    FILE *fp = fopen("emails.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("\nGenerated email addresses:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", emails[i]);
        fprintf(fp, "%s\n", emails[i]);
    }

    fclose(fp);
    printf("\nEmails saved to emails.txt\n");

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
