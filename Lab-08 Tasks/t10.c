#include <stdio.h>
int main(){
    int days, shows, total = 0;
    printf("Enter number of days for which the screens will be working: ");
    scanf("%d", &days);
    printf("Enter number of shows per day: ");
    scanf("%d", &shows);
    int cinema[2][days][shows];
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("For Screen %d\n", i+1);
        for (int j = 0; j < days; j++)
        {
            printf("Day %d\n", j+1);
            for (int k = 0; k < shows; k++)
            {
                printf("Enter the total revenue earned (in PKR) from show %d on day %d: ", k+1, j+1);
                scanf("%d", &cinema[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        total = 0;
        for (int j = 0; j < days; j++)
        {
            for (int k = 0; k < shows; k++)
            {
                total += cinema[i][j][k];
            }
        }
        printf("Total revenue for screen %d: %d\n", i+1, total);
        printf("Average revenue for screen %d: %d\n", i+1, total/(days*shows));
    }
    return 0;
}