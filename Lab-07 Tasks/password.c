#include <stdio.h>
#include <string.h>

int main()
{
    char pass[1000];
    printf("Enter your password: ");
    scanf("%[^\nA-Za-z]", pass);

    if (strlen(pass) == 0) {
        printf("Invalid input! Password cannot contain alphabets.\n");
    } 
    else if (strlen(pass) < 8) {
        printf("Password: %s\nLength: %d\nWeak Password!\n", pass, (int)strlen(pass));
    } 
    else {
        printf("Password: %s\nLength: %d\nStrong Password!\n", pass, (int)strlen(pass));
    }

    return 0;
}
