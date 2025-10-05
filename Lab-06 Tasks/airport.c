#include <stdio.h>
int main()
{
    char lug;
    int pass, flag = 0;
    int count = 1;
    printf("Enter number of passengers: ");
    scanf("%d", &pass);
    for (count; count <= pass; count++)
    {
        printf("Do bag number %d have suspecious item (y/n)? ", count);
        scanf(" %c", &lug);
        if (lug == 'Y' || lug == 'y')
        {
            flag = 1;
            printf("Bag number %d is found suspecious", count);
            break;
        }
    }
    if (flag == 0)
    {
        printf("All bags cleared successfully");
    }
    return 0;
}