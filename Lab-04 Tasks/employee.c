#include<stdio.h>
#include<string.h>
int main()
{
    int hourstotal, shift;
    char available[10000];
    printf("Enter your total working hours for the week: ");
    scanf("%d", &hourstotal);
    printf("Enter number of hours of your shift: ");
    scanf("%d", &shift);
    printf("Enter availability (present/absent): ");
    scanf("%s", &available);
    if (strcmp(available, "present") == 0)
    {
        if ((hourstotal) < 40)
        {
            if (((hourstotal + shift) <= 40))
            {
                if (shift <= 8)
                {
                    printf("Employee has been assigned a shift for %d hours", shift);
                }
                else
                {
                    printf("Employee can't work for %d", shift);
                }
            }
            else
            {
                printf("The employee will work for %d hours only", (40-hourstotal));
            }
        }
        else
        {
            printf("The employee has already completed his 40 hours per week");
        }
    }
    else if (strcmp(available, "absent") == 0)
    {
        printf("Employee is unavailable");
    }
    return 0;
}