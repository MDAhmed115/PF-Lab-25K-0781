#include <stdio.h>
#include<windows.h>
int main()
{
    int litres, petrol = 270, finalprice;
    printf("Petrol Price per litre: %d Rs\n", petrol);
    printf("Enter litres of petrol for refill (Min 1 Litre): ");
    scanf("%d", &litres);
    for (int i = 1; i <= litres; i++)
    {
        printf("Fuel Dumped: %d litres\n", i);
        Sleep(1000);
    }
    finalprice = litres * petrol;
    printf("Litres of petrol: %d\n", litres);
    printf("Total Price: %d", finalprice);
    return 0;
}