#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, newn;
    printf("Enter the number of video frames: ");
    scanf("%d", &n);
    int *ptr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Enter data for frame %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    printf("Data full!\n");
    printf("Enter a larger value for more frames: ");
    scanf("%d", &newn);
    while (newn <= n){
        printf("Invalid value!\n");
        printf("Enter a larger value for more frames: ");
        scanf("%d", &newn);
    }
    int *temp = realloc(ptr, newn * sizeof(int));
    if (temp != NULL){
        ptr = temp;
        for (int i = n; i < newn; i++){
            printf("Enter data for frame %d: ", i + 1);
            scanf("%d", ptr + i);
        }
        for (int i = 0; i < newn; i++){
            printf("Data for frame %d: %d", i+1, *(ptr + i));
        }
    }
    else{
        printf("Realloc failed!\n");
    }

    free(ptr);
    return 0;
}