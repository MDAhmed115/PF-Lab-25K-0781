#include <stdio.h>
int main() {
    char name[100000], roll[1000000];
    printf("FULL NAME: ");
    scanf(" %[^\n]", &name);
    printf("FAST NU ID: ");
    scanf("%s", &roll);
    printf("Your details: ");
    printf("\n\tName: %s", name);
    printf("\n\tRoll No: %s", roll);
    return 0;
}