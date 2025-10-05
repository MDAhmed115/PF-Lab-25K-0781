#include <stdio.h>
int main()
{
    char check, fault;
    int num;
    printf("Is it night (y/n)? ");
    scanf(" %c", &check);
    switch (check)
    {
        case 'y': case 'Y':
        printf("Enter number of street lights: ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {
            printf("Is street light %d faulty? (y/n)? ", i);
            scanf(" %c", &fault);
            if (fault == 'y' || fault == 'Y')
            {
                printf("Light number %d is faulty\n", i);
            }
            else
            {
                printf("Light %d turned on\n", i);
            }
        }
        printf("Street Light activation complete");
        break;
        default:
        printf("This system only works at night");
        break;
    }
    return 0;
}