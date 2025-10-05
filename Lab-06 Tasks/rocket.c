#include <stdio.h>
#include <windows.h>
int main()
{
    int litres, i;
    printf("Enter the litres of fuel in the rocket: ");
    scanf("%d", &litres);
    for (i = litres; i > 0; i-=100)
    {
        printf("Fuel Remaining: %d litres\n", i);
        if (i < 100)
        {
            printf("Final Stage Reached");
        }
        Sleep(1000);
    }
    return 0;
}