#include <stdio.h>
int main(){
    int rows, seats;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of seats in each row: ");
    scanf("%d", &seats);
    for (int row = 1; row <= rows; row++)
    {
        for (int seat = 1; seat <= seats; seat++)
        {
            printf("Row %d, Seat %d\n", row, seat);
        }
    }
    return 0;
}