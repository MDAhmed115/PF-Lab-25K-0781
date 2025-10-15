#include <stdio.h>
int main()
{
    int attendance[7], present = 0, i = 0;
    for (i = 0; i < 7; i++)
    {
        printf("Enter attendance for day %d: ", i + 1);
        scanf("%d", &attendance[i]);
        if (attendance[i] == 1)
        {
            present += 1;
        }
    }
    printf("Present days: %d\n", present);
    if (present >= 6)
    {
        printf("Excellent Attendance!");
    }
    else if (present == 5)
    {
        printf("Average Attendance!");
    }
    else
    {
        printf("Need Improvement!");
    }
    return 0;
}