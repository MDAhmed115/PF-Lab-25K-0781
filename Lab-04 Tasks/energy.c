#include<stdio.h>
#include<string.h>
int main()
{
    int fanuse, fanflag, acuse, acflag, refuse, refflag;
    printf("Enter usage for fan: ");
    scanf("%d", &fanuse);
    if (fanuse > 10)
    {
        fanflag = 1;
    }
    printf("\nEnter usage for A/C: ");
    scanf("%d", &acuse);
    if (acuse > 10)
    {
        acflag = 1;
    }
    printf("\nEnter usage for refrigerator: ");
    scanf("%d", &refuse);
    if (refuse > 10)
    {
        refflag = 1;
    }
    printf("\nFan usage: %d", fanuse);
    printf("\nA/C usage: %d", acuse);
    printf("\nRefrigerator usage: %d", refuse);
    if (fanflag == 1)
    {
        printf("\nFan has exceed safety 10 kWh limit");
    }
    if (acflag == 1)
    {
        printf("\nA/C has exceed safety 10 kWh limit");
    }
    if (refflag == 1)
    {
        printf("\nRefrigerator has exceed safety 10 kWh limit");
    }
    return 0;
}