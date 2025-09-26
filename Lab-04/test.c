#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, switchCount = 0;
    char action[20];

    printf("Enter number of actions: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter action %d (stay/switch): ", i + 1);
        scanf("%s", action);

        if (strcmp(action, "switch") == 0)
        {
            switchCount++;

            if (switchCount == 1)
            {
                printf("Warning 1: Do not switch tabs!\n");
            }
            else if (switchCount == 2)
            {
                printf("Warning 2: Do not switch tabs again!\n");
            }
            else if (switchCount == 3)
            {
                printf("Exam terminated due to multiple tab switches.\n");
                return 0; // exam ends immediately
            }
        }
    }

    if (switchCount == 0)
        printf("Exam completed successfully.\n");
    else if (switchCount < 3)
        printf("Exam finished with %d warning(s).\n", switchCount);

    return 0;
}
