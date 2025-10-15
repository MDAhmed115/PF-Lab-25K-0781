#include <stdio.h>
int main()
{
    int stock[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Enter the quantity for the item %d: ", i + 1);
        scanf("%d", &stock[i]);
        if (stock[i] < 0)
        {
            stock[i] = 0;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("Item %d: %d\n", i + 1, stock[i]);
    }
    return 0;
}