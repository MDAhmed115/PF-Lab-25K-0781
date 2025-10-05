#include <stdio.h>
#include<windows.h>
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
        Sleep(1000);
    }
    return 0;
}