#include <stdio.h>
int main()
{
    int rating[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter rating (1-10) for the item %d: ", i + 1);
        scanf("%d", &rating[i]);
        sum += rating[i];
    }
    printf("Average rating: %.2f", sum / 5.0);
    for (int i = 0; i < 5; i++)
    {
        if (rating[i] < 5)
        {
            printf("\nItem '%d' needs improvement.", i + 1);
        }
    }
    return 0;
}