#include <stdio.h>
int main()
{
    int num[10], max = 0, j, maxnum, count = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your favourite number: ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (j = 0; j < 10; j++)
        {
            if (num[i] == num[j])
            {
                count++;
            }
            if (count > max)
            {
                max = count;
                maxnum = num[i];
            }
        }
    }
    printf("Max number: %d", maxnum);
    printf("\nMax number count: %d", max);
    return 0;
}