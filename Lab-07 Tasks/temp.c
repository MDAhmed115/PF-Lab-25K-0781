#include <stdio.h>
int main()
{
    int temp[7], hot = 0, mod = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &temp[i]);
        if (temp[i] > 30)
        {
            hot += 1;
        }
        if (temp[i] <= 30)
        {
            mod += 1;
        }
    }
    printf("Hot days: %d\nModerate days: %d", hot, mod);
    return 0;
}