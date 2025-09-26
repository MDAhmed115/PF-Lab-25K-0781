#include<stdio.h>
#include<string.h>
int main()
{
    int balance;
    int limit = 50000;
    int withdraw;
    int invalid = 0;
    int withcount = 0;
    printf("Enter your balance: \n");
    scanf("%d", &balance);
    printf("Enter the amount you want to withdraw (Enter -1 to stop withdraw): \n");
    scanf("%d", &withdraw);
    while (withdraw != -1)
    {
        if (withdraw > balance)
        {
            printf("Insufficient Balance!\n");
            invalid++;
            if (invalid == 3)
            {
                printf("Too many attempts! Account Blocked!");
                withdraw = -1;
            }
            else
            {
                printf("Enter the amount you want to withdraw (Enter -1 to stop withdraw): \n");
                scanf("%d", &withdraw);
            }
        }
        else if (withdraw > limit)
        {
            printf("Withdraw can't be more than 50000 and limit exceeded!\n");
            invalid++;
            if (invalid == 3)
            {
                printf("Too many attempts! Account Blocked!");
                withdraw = -1;
            }
            else
            {
                printf("Enter the amount you want to withdraw (Enter -1 to stop withdraw): \n");
                scanf("%d", &withdraw);
            }
        }
        else if ((withcount + withdraw) == limit)
        {
            printf("Withdrawal limit reached!\n");
            withcount += withdraw;
            balance -= withdraw;
            withdraw = -1;
        }
        else if ((withcount + withdraw) > limit)
        {
            printf("Withdrawal limit reached!\n");
            withdraw = -1;
        }
        else
        {
            withcount += withdraw;
            balance -= withdraw;
            printf("Balance: %d\n", balance);
            printf("Enter the amount you want to withdraw (Enter -1 to stop withdraw): \n");
            scanf("%d", &withdraw);
        }
    }
    printf("Total Withdrawal: %d\n", withcount);
    printf("Remaining Balance: %d\n", balance);
    return 0;
}