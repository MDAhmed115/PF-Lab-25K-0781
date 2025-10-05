#include <stdio.h>
int main()
{
    int bal;
    char check;
    printf("Enter your balance: ");
    scanf("%d", &bal);
    printf("Do you want to make a phone call (y/n)? ");
    scanf(" %c", &check);
    while (bal >= 10 && (check == 'Y' || check == 'y'))
    {
        bal = bal - 10;
        printf("New Balance: %d\n", bal);
        printf("Do you want to make a phone call (y/n)? ");
        scanf(" %c", &check);
        if (bal < 10)
        {
            printf("You cannot make further phone calls\n");
        }
    }
    printf("Final Balance: %d", bal);
    return 0;
}