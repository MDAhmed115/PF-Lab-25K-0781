#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num, total = 0;
    printf("Enter the number of transactions of today: ");
    scanf("%d", &num);
    int *ptr = malloc(num * sizeof(int));
    for (int i = 0; i < num; i++){
        printf("Enter the value of transaction %d: ", i+1);
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }
    for (int i = 0; i < num; i++){
        printf("Transaction at day %d: %d", i+1, ptr[i]);
    }
    printf("Total: %d", total);
    printf("Average: %.2f", (float)total / num);

    free(ptr);
    return 0;
}