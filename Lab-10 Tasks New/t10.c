#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char transaction[100];
    int count = 0;

    while (1) {
        printf("Enter transaction message (type 'EXIT' to quit): ");
        fgets(transaction, 100, stdin);
        transaction[strlen(transaction) - 1] = '\0';
        if (strcmp(transaction, "EXIT") == 0) break;

        FILE *fp = fopen("transactions.txt", "a");
        if (fp == NULL) {
            printf("Error opening transactions.txt!\n");
            return 1;
        }
        fprintf(fp, "%s\n", transaction);
        fclose(fp);

        count++;

        if (count % 5 == 0) {
            FILE *ft = fopen("transactions.txt", "r");
            FILE *fb = fopen("backup.txt", "w");
            if (ft == NULL || fb == NULL) {
                printf("Error creating backup!\n");
                return 1;
            }

            char line[100];
            while (fgets(line, 100, ft) != NULL) {
                fputs(line, fb);
            }

            fclose(ft);
            fclose(fb);

            fp = fopen("transactions.txt", "w");
            if (fp != NULL) fclose(fp);

            printf("Backup created after 5 transactions!\n");
        }
    }

    printf("\nExiting program.\n");
    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
