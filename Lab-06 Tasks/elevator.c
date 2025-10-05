#include <stdio.h>
int main()
{
    int floor, count = 0;
    printf("Enter your floor: ");
    scanf("%d", &floor);
    if (floor < 0 || floor > 50)
    {
        printf("Invalid floor!");
    }
    while (count <= floor)
    {
        printf("Floor %d\n", count);
        if (count == floor)
        {
            printf("You have arrived at your destination");
        }
        count++;
    }
    return 0;
}