#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int students, subjects;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);
    int **marks;
    marks = malloc(students * sizeof(int *));
    for (int i = 0; i < students; i++){
        *(marks + i) = malloc(subjects * sizeof(int));
    }
    for (int i = 0; i < students; i++){
        for (int j = 0; j < subjects; j++){
            printf("Enter marks for student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", *(marks + i) + j);
        }
    }
    for (int i = 0; i < students; i++){
        for (int j = 0; j < subjects; j++){
            printf("Student %d: Subject %d marks: %d\n", i + 1, j + 1, *(*(marks + i) + j));
        }
    }
    for (int i = 0; i < students; i++){
        free(*(marks + i));
    }

    free(marks);
    return 0;
}