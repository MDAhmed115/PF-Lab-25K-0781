#include<stdio.h>
#include<string.h>
int main()
{
    char name[100000];
    int age;
    char condition[10000];
    printf("Enter patient's name: ");
    scanf("%s", &name);
    printf("\nEnter age of the patient: ");
    scanf("%d", &age);
    printf("\nEnter patient's condition: ");
    scanf("%s", &condition);
    if ((age < 12 || age > 65) || strcmp(condition, "critical") == 0)
    {
        printf("\n%s of age %d years is on High Priority Card", name, age);
    }
    else if (strcmp(condition, "moderate") == 0)
    {
        printf("\n%s of age %d years is on Medium Priority Card", name, age);
    }
    else if (strcmp(condition, "mild") == 0)
    {
        printf("\n%s of age %d years is on Low Priority Card", name, age);
    }
    return 0;
}