#include <stdio.h>
int main()
{
    int time;
    printf("Enter the time for exam in minutes: ");
    scanf("%d", &time);
    for (int i = time; i >= 0; i--)
    {
        printf("Time remaining: %d minutes\n", i);
        if (i == 0)
        {
            printf("Time Up - Exam Submitted");
        }
    }
    return 0;
}