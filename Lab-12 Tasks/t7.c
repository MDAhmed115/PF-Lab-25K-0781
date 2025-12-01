#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter the number of patients: ");
    scanf("%d", &num);
    int *ptr = malloc(num * sizeof(int));
    for (int i = 0; i < num; i++){
        printf("Enter the readings of patient %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < num; i++){
        printf("Readings of patient %d: %d\n", i+1, ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    return 0;
}