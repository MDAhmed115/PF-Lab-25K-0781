#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char branchA[50][50], branchB[50][50], merged[100][50];
    int countA = 0, countB = 0, merged_count = 0;

    FILE *fa = fopen("branchA.txt", "r");
    FILE *fb = fopen("branchB.txt", "r");

    if (fa == NULL || fb == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while (fgets(branchA[countA], 50, fa) != NULL) {
        branchA[countA][strlen(branchA[countA]) - 1] = '\0';
        countA++;
    }

    while (fgets(branchB[countB], 50, fb) != NULL) {
        branchB[countB][strlen(branchB[countB]) - 1] = '\0';
        countB++;
    }

    fclose(fa);
    fclose(fb);

    for (int i = 0; i < countA; i++) {
        strcpy(merged[merged_count], branchA[i]);
        merged_count++;
    }

    for (int i = 0; i < countB; i++) {
        int duplicate = 0;
        for (int j = 0; j < merged_count; j++) {
            if (strcmp(branchB[i], merged[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            strcpy(merged[merged_count], branchB[i]);
            merged_count++;
        }
    }

    FILE *fm = fopen("merged_catalog.txt", "w");
    if (fm == NULL) {
        printf("Error creating merged catalog!\n");
        return 1;
    }

    for (int i = 0; i < merged_count; i++) {
        fprintf(fm, "%s\n", merged[i]);
    }

    fclose(fm);

    printf("Merged catalog created:\n");
    for (int i = 0; i < merged_count; i++) {
        printf("%s\n", merged[i]);
    }
    printf("\nTotal items after merging: %d\n", merged_count);

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
