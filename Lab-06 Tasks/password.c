#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, flag = 0;
    char pass[1000];
    do
    {
        printf("Enter a 6 digit password: ");
        scanf("%s", &pass);
        if (strlen(pass) < 6)
        {
            printf("Password entered is weak\n");
            i++;
        }
        else
        {
            printf("Password entered is strong\n");
            flag = 1;
        }
    } while (i < 6 && flag == 0);
    if (i == 6)
    {
        printf("Account locked");
    }
    return 0;
}