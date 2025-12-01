#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num, total = 0;
    printf("Enter the number of questions you attempted: ");
    scanf("%d", &num);
    int *ptr = (int*)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++){
        printf("Enter marks of question %d: ", i+1);
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }
    for (int i = 0; i < num; i++){
        printf("Marks of question %d: %d\n", i+1, ptr[i]);
    }
    printf("Total marks: %d\n", total);
    free(ptr);
    return 0;
}