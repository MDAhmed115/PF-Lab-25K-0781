#include <stdio.h>

int main()
{
    int vehicles;
    char emergency;

    printf("Enter number of vehicles at intersection: ");
    scanf("%d", &vehicles);

    printf("Is there an emergency vehicle? (Y/N): ");
    scanf(" %c", &emergency);  // space before %c to ignore newline

    if (emergency == 'Y' || emergency == 'y')
    {
        printf("Emergency detected! Signal switched to GREEN immediately.\n");
    }
    else
    {
        if (vehicles < 10)
        {
            printf("Green light duration: 15 seconds\n");
        }
        else if (vehicles >= 10 && vehicles <= 30)
        {
            printf("Green light duration: 30 seconds\n");
        }
        else // vehicles > 30
        {
            printf("Green light duration: 60 seconds\n");
        }
    }

    return 0;
}
