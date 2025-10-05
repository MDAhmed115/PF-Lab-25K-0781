#include <stdio.h>
int main()
{
    int comp, pass, totalpass = 0;
    printf("Enter number of compartments in the train: ");
    scanf("%d", &comp);
    for (int i = 1; i <= comp; i++)
    {
        pass = 0;
        printf("Enter number of passengers in Compartment %d: ", i);
        scanf("%d", &pass);
        while (pass > 10)
        {
            printf("No more than 10 passengers are allowed in a compartment\n");
            printf("Enter number of passengers in Compartment %d: ", i);
            scanf("%d", &pass);
        }
        if (pass == 0)
        {
            printf("Compartment %d is empty\n", i);
        }
        else
        {
            printf("Compartment %d has %d passengers\n", i, pass);
        }
        totalpass += pass;
    }
    printf("Total number of passengers in the train: %d", totalpass);
    return 0;
}