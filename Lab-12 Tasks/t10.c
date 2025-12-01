#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num, total = 0, min, max;
    printf("Enter number of students: ");
    scanf("%d", &num);
    int *ptr = malloc(num * sizeof(int));
    for (int i = 0; i < num; i++){
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }
    min = *(ptr + 0);
    max = *(ptr + 0);
    for (int i = 0; i < num; i++){
        if (ptr[i] > max) max = ptr[i];
        if (ptr[i] < min) min = ptr[i];
    }
    printf("Total marks: %d\n", total);
    printf("Average: %.2f\n",(float)total/num);
    printf("Minimum marks: %d\n", min);
    printf("Maximum marks: %d\n", max);
    free(ptr);
    return 0;
}