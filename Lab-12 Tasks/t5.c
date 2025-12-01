#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int *ptr = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++){
        printf("Enter data for day %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    int *temp = realloc(ptr, 5 * sizeof(int));
    if (temp != NULL){
        ptr = temp;
        for (int i = 0; i < 5; i++){
            printf("Data for day %d: %d\n", i+1, *(ptr + i));
        }
    }
    else{
        printf("Realloc failed!\n");
    }

    free(ptr);
    return 0;
}