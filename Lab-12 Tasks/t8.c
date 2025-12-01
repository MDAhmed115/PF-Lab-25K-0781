#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the message: ");
    scanf("%d", &size);
    char *ptr = malloc(size * sizeof(char));
    printf("Enter the message: ");
    scanf(" %[^\n]", ptr);
    printf("Message: %s\n", ptr);

    free(ptr);
    return 0;
}