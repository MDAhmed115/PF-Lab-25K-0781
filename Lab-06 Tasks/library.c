#include <stdio.h>
int main()
{
    int fine = 0;
    char check;
    int days;
    printf("Have you returned the file (y/n)? ");
    scanf(" %c", &check);
    if (check == 'n' || check == 'N')
    {
        printf("How many days have you dealyed for submission: ");
        scanf("%d", &days);
        for (int i = 1; i <= days; i++)
        {
            fine = fine + 5;
            printf("Fine for day %d is %d Rs\n", i, fine);
        }
    }
    else
    {
        printf("Nice one 👍");
    }
    return 0;
}