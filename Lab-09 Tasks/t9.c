#include <stdio.h>

int main() {
    int marks[5];
    int *ptr = marks;
    int total = 0;
    float average;

    printf("=== Displaying Array Elements Using Pointers ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nMarks and Memory Addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\t(Address: %p)\n", i + 1, *(ptr + i), (ptr + i));
        total += *(ptr + i);
    }

    average = total / 5.0;

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
