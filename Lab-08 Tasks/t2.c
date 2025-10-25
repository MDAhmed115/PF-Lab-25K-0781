#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the pyramid: ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        for (int space = 1; space <= size - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}