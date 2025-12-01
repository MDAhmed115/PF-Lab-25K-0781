#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    float fixed[5] = {6.99, 7.99, 10, 15.99, 100};
    printf("Enter the number of items you want to buy: ");
    scanf("%d", &n);
    float *ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++){
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    printf("Fixed:\n");
    for (int i = 0; i < 5; i++){
        printf("Price: %.2f\n", fixed[i]);
    }
    printf("DMA:\n");
    for (int i = 0; i < n; i++){
        printf("Price: %.2f\n", *(ptr + i));
    }

    free(ptr);
    return 0;
}