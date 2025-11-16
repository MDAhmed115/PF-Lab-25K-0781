#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char names[50][50], diseases[50][50], wards[50][50];
    int i, j, n;

    printf("Enter number of patients: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Patient %d name: ", i + 1);
        fgets(names[i], 50, stdin);
        names[i][strlen(names[i]) - 1] = '\0';

        printf("Patient %d disease: ", i + 1);
        fgets(diseases[i], 50, stdin);
        diseases[i][strlen(diseases[i]) - 1] = '\0';

        printf("Patient %d ward: ", i + 1);
        fgets(wards[i], 50, stdin);
        wards[i][strlen(wards[i]) - 1] = '\0';
    }

    char search_disease[50];
    printf("\nEnter disease to search patients: ");
    fgets(search_disease, 50, stdin);
    search_disease[strlen(search_disease) - 1] = '\0';

    printf("\nPatients with disease %s:\n", search_disease);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(diseases[i], search_disease) == 0) {
            printf("%s (Ward: %s)\n", names[i], wards[i]);
            found = 1;
        }
    }
    if (!found) printf("No patients found with this disease.\n");

    // Sorting alphabetically by name using simple bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);

                strcpy(temp, diseases[j]);
                strcpy(diseases[j], diseases[j + 1]);
                strcpy(diseases[j + 1], temp);

                strcpy(temp, wards[j]);
                strcpy(wards[j], wards[j + 1]);
                strcpy(wards[j + 1], temp);
            }
        }
    }

    printf("\nSorted patient records:\n");
    for (i = 0; i < n; i++) {
        printf("%s | %s | %s\n", names[i], diseases[i], wards[i]);
    }

    FILE *fp = fopen("records.txt", "w");
    if (fp == NULL) {
        printf("\nError opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s|%s|%s\n", names[i], diseases[i], wards[i]);
    }

    fclose(fp);
    printf("\nRecords saved to records.txt\n");

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
