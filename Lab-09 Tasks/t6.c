#include <stdio.h>

void inputCalories(int cal[7]) {
    printf("Enter calories burned for each day:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &cal[i]);
    }
}

int calculateTotal(int cal[7]) {
    int total = 0;
    for (int i = 0; i < 7; i++) total += cal[i];
    return total;
}

float calculateAverage(int total) {
    return total / 7.0;
}

int findMostActiveDay(int cal[7]) {
    int max = cal[0], day = 0;
    for (int i = 1; i < 7; i++) {
        if (cal[i] > max) {
            max = cal[i];
            day = i;
        }
    }
    return day;
}

void giveFeedback(float avg) {
    if (avg >= 700) printf("Excellent Progress!\n");
    else if (avg >= 400) printf("Good Effort!\n");
    else printf("Needs Improvement!\n");
}

void displayResult(int cal[7]) {
    int total = calculateTotal(cal);
    float avg = calculateAverage(total);
    int activeDay = findMostActiveDay(cal);

    printf("\n=== Weekly Fitness Summary ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d calories\n", i + 1, cal[i]);
    }
    printf("\nTotal calories burned: %d\n", total);
    printf("Average per day: %.2f\n", avg);
    printf("Most active day: Day %d (%d calories)\n", activeDay + 1, cal[activeDay]);
    giveFeedback(avg);
}

int main() {
    int calories[7];
    inputCalories(calories);
    displayResult(calories);
    return 0;
}
