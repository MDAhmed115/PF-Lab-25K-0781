#include <stdio.h>
#include <string.h>

#define MONTHS 12
#define DAYS 31

char tasks[MONTHS][DAYS][50];

void preloadTasks() {
    strcpy(tasks[0][4], "Pay bills");
    strcpy(tasks[2][10], "Doctor appointment");
    strcpy(tasks[6][20], "Meeting with client");
}

void addTask() {
    int month, day;
    char task[50];
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.\n\n");
        return;
    }
    printf("Enter task: ");
    scanf(" %[^\n]", task);
    strcpy(tasks[month - 1][day - 1], task);
    printf("Task added successfully.\n\n");
}

void removeTask() {
    int month, day;
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.\n\n");
        return;
    }
    if (strlen(tasks[month - 1][day - 1]) == 0) {
        printf("No task found on this date.\n\n");
        return;
    }
    strcpy(tasks[month - 1][day - 1], "");
    printf("Task removed successfully.\n\n");
}

void viewAll() {
    printf("\n=== All Scheduled Tasks ===\n");
    int found = 0;
    for (int m = 0; m < MONTHS; m++) {
        for (int d = 0; d < DAYS; d++) {
            if (strlen(tasks[m][d]) > 0) {
                printf("Month %d, Day %d: %s\n", m + 1, d + 1, tasks[m][d]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No tasks scheduled.\n");
    }
    printf("\n");
}

int main() {
    int choice = 0;
    preloadTasks();
    while (choice != 9) {
        printf("=== Digital Planner ===\n");
        printf("[1] Add a Task\n");
        printf("[2] Remove a Task\n");
        printf("[3] View All Tasks\n");
        printf("[9] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                removeTask();
                break;
            case 3:
                viewAll();
                break;
            case 9:
                printf("\nExiting Program...\n");
                break;
            default:
                printf("\nInvalid Input\n\n");
        }
    }
    return 0;
}
