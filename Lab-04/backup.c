#include <stdio.h>
#include <string.h>

int main() {
    char backup[100];
    char dailybackup[10000] = "";
    char totalbackup[100000] = "";
    char check[100];
    char daycheck[100];

    printf("Do you want to backup your data for the week (yes/no)? ");
    scanf("%s", check);

    while (strcmp(check, "yes") == 0) {
        for (int i = 1; i <= 7; i++) {
            printf("Enter your backup data: ");
            scanf("%s", backup);

            // check corruption
            if (strcmp(backup, "corrupted") == 0) {
                printf("Corruption detected! Performing FULL BACKUP immediately...\n");
                strcat(totalbackup, "FULL BACKUP | ");
                strcpy(dailybackup, ""); // reset daily backups
                i = 0; // reset cycle
                continue;
            }

            // normal daily backup
            strcat(dailybackup, "Incremental: ");
            strcat(dailybackup, backup);
            strcat(dailybackup, " | ");

            if (i == 7) {
                printf("Weekly FULL BACKUP...\n");
                strcat(totalbackup, "FULL BACKUP (week) -> ");
                strcat(totalbackup, dailybackup);
                strcat(totalbackup, "\n");
                strcpy(dailybackup, ""); // reset
            }

            printf("Do you want to backup your data for the next day (yes/no)? ");
            scanf("%s", daycheck);
            if (strcmp(daycheck, "no") == 0) {
                // 🔥 flush daily data as a final full backup
                if (strlen(dailybackup) > 0) {
                    strcat(totalbackup, "FULL BACKUP (early end) -> ");
                    strcat(totalbackup, dailybackup);
                    strcat(totalbackup, "\n");
                    strcpy(dailybackup, "");
                }
                break;
            }
        }

        printf("Do you want to backup your data for the week (yes/no)? ");
        scanf("%s", check);
    }

    printf("\n=== FINAL BACKUP LOG ===\n%s\n", totalbackup);

    return 0;
}
