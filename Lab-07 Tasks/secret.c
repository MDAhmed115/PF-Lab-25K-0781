#include <stdio.h>
#include <string.h>
int main()
{
    char name[1000];
    printf("Enter your name: ");
    scanf("%[A-Za-z]", name);
    for (int i = 0; i < strlen(name); i++)
    {
        printf("'% c' is stored on Index %d\n", name[i], i);
    }
    return 0;
}