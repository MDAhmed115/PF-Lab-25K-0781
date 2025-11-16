#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char resume[1000];
    char skills[10][50] = {"C", "Python", "SQL", "AI"};
    char detected[10][50];
    int detected_count = 0;

    printf("Enter the resume text:\n");
    fgets(resume, 1000, stdin);
    resume[strlen(resume) - 1] = '\0';

    for (int i = 0; i < 4; i++) {
        if (strstr(resume, skills[i]) != NULL) {
            int duplicate = 0;
            for (int j = 0; j < detected_count; j++) {
                if (strcmp(detected[j], skills[i]) == 0) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                strcpy(detected[detected_count], skills[i]);
                detected_count++;
            }
        }
    }

    FILE *fp = fopen("skills_found.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("\nDetected skills:\n");
    for (int i = 0; i < detected_count; i++) {
        printf("%s\n", detected[i]);
        fprintf(fp, "%s\n", detected[i]);
    }

    fclose(fp);
    printf("\nSkills saved to skills_found.txt\n");

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
