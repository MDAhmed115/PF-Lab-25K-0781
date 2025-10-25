#include <stdio.h>
int main(){
    int i, j, sum;
    int temp[7][2];
    for (i = 0; i < 7; i++)
    {
        printf("Enter temperatures for day %d: \n", i + 1);
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }
    for (i = 0; i < 7; i++)
    {
        sum = 0;
        for (j = 0; j < 2; j++)
        {
            sum += temp[i][j];
        }
        printf("Average temperature for day %d: %d", i + 1, sum / 2);
        printf("\n");
    }
}