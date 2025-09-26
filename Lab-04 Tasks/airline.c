#include <stdio.h>
#include <string.h>

int main()
{
    char seatClass[100];
    int row;
    char children[100];

    printf("Enter your class (business/economy): ");
    scanf("%s", seatClass);

    printf("Enter your row number (1-21): ");
    scanf("%d", &row);

    printf("Do you have children travelling with you (yes/no): ");
    scanf("%s", children);

    if (strcmp(seatClass, "business") == 0 || strcmp(children, "yes") == 0)
    {
        printf("You are in Group A!");
    }
    else if (strcmp(seatClass, "economy") == 0 && (row >= 1 && row <= 10))
    {
        printf("You are in Group B!");
    }
    else if (strcmp(seatClass, "economy") == 0 && (row >= 11 && row <= 20))
    {
        printf("You are in Group C!");
    }
    else
    {
        printf("You are in Group D!");
    }

    return 0;
}
