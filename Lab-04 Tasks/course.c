#include <stdio.h>
#include <string.h>

int main()
{
    int coursecount = 0;
    int check = 0;
    char course[1000];
    char pass[100];
    char overlap[100];
    char timecheck[100];
    char newcourse[100];

    printf("How many courses you already have? ");
    scanf("%d", &coursecount);

    printf("\nWould you like to take a new course (yes/no)? ");
    scanf("%s", newcourse);

    while (coursecount < 5 && strcmp(newcourse, "yes") == 0 && check == 0)
    {
        printf("\nWhich course you would like to take? ");
        scanf("%s", course);

        printf("\nHave you passed all the subjects (yes/no)? ");
        scanf("%s", pass);

        printf("\nIs there any other course at the same time (yes/no)? ");
        scanf("%s", timecheck);

        if (strcmp(timecheck, "yes") == 0)
        {
            printf("Which course does it overlap with? ");
            scanf("%s", overlap);
        }

        if (strcmp(pass, "yes") == 0)
        {
            if (strcmp(timecheck, "no") == 0)
            {
                coursecount++;
                printf("\nYou have selected %s course", course);

                if (coursecount < 5) // ask again only if not full
                {
                    printf("\nWould you like to take another course (yes/no)? ");
                    scanf("%s", newcourse);
                }
            }
            else if (strcmp(timecheck, "yes") == 0)
            {
                printf("\n%s course overlaps with %s course", course, overlap);
                check = 1; // stop further selection
                break;
            }
        }
        else
        {
            printf("\nYou have not passed all the subjects for this course");
            check = 1; // stop further selection
            break;
        }
    }

    if (coursecount == 5)
    {
        printf("\nMaximum course limit reached!");
    }

    printf("\nYou have selected %d courses", coursecount);
    return 0;
}
