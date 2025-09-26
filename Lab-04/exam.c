#include<stdio.h>
#include<string.h>
int main()
{
    char add[100];
    char group[100];
    char seat[100];
    int maths = 0;
    int science = 0;
    int cs = 0;
    printf("Enter number of students for Maths, Science, CS: \n");
    scanf("%d %d %d", &maths, &science, &cs);
    printf("Do you want to add new student (yes/no): ");
    scanf("%s", &add);
    while (strcmp(add, "yes") == 0)
    {
        printf("These are the following groups:");
        printf("\nMaths, Science, CS");
        printf("\nEnter your group: ");
        scanf("%s", &group);
        if (strcmp(group, "Maths") == 0)
        {
            if (maths < 30)
            {
                maths++;
            }
            else
            {
                printf("Maths group is full!");
            }
        }
        else if (strcmp(group, "Science") == 0)
        {
            if (science < 30)
            {
                science++;
            }
            else
            {
                printf("Science group is full!");
            }
        }
        else if (strcmp(group, "CS") == 0)
        {
            if (cs < 30)
            {
                cs++;
            }
            else
            {
                printf("CS group is full!");
            }
        }
        printf("\nDo you want to add new student (yes/no): ");
        scanf("%s", &add);
    }
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if (j % 3 == 0)
            {
                strcpy(seat, "Maths");
                if (maths > 0)
                {
                    printf("\nRow %d, Seat %d: Maths", i, j);
                    maths--;
                }
                else
                {
                    printf("\nRow %d, Seat %d: Empty", i, j);
                }
            }
            else if (j % 3 == 1)
            {
                strcpy(seat, "Science");
                if (science > 0)
                {
                    printf("\nRow %d, Seat %d: Science", i, j);
                    science--;
                }
                else
                {
                    printf("\nRow %d, Seat %d: Empty", i, j);
                }
            }
            else if (j % 3 == 2)
            {
                strcpy(seat, "CS");
                if (strcmp(seat, "CS") == 0 && cs > 0)
                {
                    printf("\nRow %d, Seat %d: CS", i, j);
                    cs--;
                }
                else
                {
                    printf("\nRow %d, Seat %d: Empty", i, j);
                }
            }
        }
    }
    return 0;
}