#include <stdio.h>
int main()
{
    char name[1000];
    printf("Enter your name: ");
    scanf("%[A-Za-z]", name);
    printf("Your name is: %s", name);
    return 0;
}