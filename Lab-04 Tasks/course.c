#include<stdio.h>
#include<string.h>
int main()
{
    int coursecount = 0;
    char course[100000];
    char pass[100000];
    char overlap[10000];
    char timecheck[10000];
    char newcourse[10000];
    printf("How many courses you already have? ");
    scanf("%d", &coursecount);
    printf("\nWould you like to take a new course (yes/no)? ");
    scanf("%s", newcourse);
    while (coursecount < 5 && strcmp(newcourse, "yes") == 0 && coursecount > 0)
    {
        printf("\nWhich course you would like to take? ");
        scanf("%s", &course);
        printf("\nHave you passed all the subjects (yes/or)? ");
        scanf("%s", &pass);
        printf("\nIs there any other course on same time (yes/no)? If yes which one? \n");
        scanf("%s", &timecheck);
        if (strcmp(timecheck, "yes") == 0)
        {
            scanf("%s", &overlap);
        }
        if (strcmp(pass, "yes") == 0)
        {
            if (strcmp(timecheck, "no") == 0)
            {
                coursecount++;
                printf("\nYou have selected %s course", course);
                printf("\nWould you like to take another course (yes/or)? ");
                scanf("%s", &newcourse);
            }
            else if (strcmp(timecheck, "yes") == 0)
            {
                printf("\n%s course overlap with %s course", course, overlap);
            }
        }
        else
        {
            printf("\nYou have not passed all the subjects for this course");
        }
    }
    if (coursecount == 5)
    {
        printf("\nMaximum course limit reached!");
    }
    printf("\nYou have selected %d courses", coursecount);
    return 0;
}