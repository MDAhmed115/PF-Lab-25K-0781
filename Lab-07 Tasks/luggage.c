#include <stdio.h>
int main()
{
    int luggage[6], over = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter weight for the bag number %d: ", i + 1);
        scanf("%d", &luggage[i]);
        if (luggage[i] > 25)
        {
            over += 1;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (luggage[i] > 25)
        {
            printf("\nBag number %d is overweight", i + 1);
        }
    }
    printf("\nTotal overwieght bags: %d", over);
    return 0;
}