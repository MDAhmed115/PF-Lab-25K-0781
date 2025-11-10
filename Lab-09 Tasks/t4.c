#include <stdio.h>

void inputMarks(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
}

int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

float calculateAverage(int total, int size) {
    return (float)total / size;
}

char assignGrade(float avg) {
    if (avg >= 85) return 'A';
    else if (avg >= 70) return 'B';
    else if (avg >= 50) return 'C';
    else return 'F';
}

void displayResult(int marks[], int size, int total, float avg, char grade) {
    printf("=== Student Result ===\n\n");
    for (int i = 0; i < size; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n\n", grade);
}

int main() {
    int marks[5];
    int total;
    float avg;
    char grade;

    printf("=== Student Result Evaluation System ===\n\n");
    inputMarks(marks, 5);
    total = calculateTotal(marks, 5);
    avg = calculateAverage(total, 5);
    grade = assignGrade(avg);
    displayResult(marks, 5, total, avg, grade);
    return 0;
}
