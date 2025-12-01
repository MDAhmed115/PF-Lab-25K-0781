#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter the number of sensors: ");
    scanf("%d", &num);
    int *ptr = calloc(num, sizeof(int));
    for (int i = 0; i < num; i++){
        printf("%d\n", *(ptr + i));
    }
    for (int i = 0; i < num; i++){
        printf("Enter the value for sensor %d:  ", i+1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < num; i++){
        printf("Value for sensor %d: %d\n", i+1, *(ptr + i));
    }

    free(ptr);
}