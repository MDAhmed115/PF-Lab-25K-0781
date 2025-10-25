#include<stdio.h>
int main(){
    int num, shelf;
    printf("Enter number of books in each shelf: ");
    scanf("%d", &num);
    printf("Enter number of shelves: ");
    scanf("%d", &shelf);
    int lib[shelf][num];
    for (int i = 0; i < shelf; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("Enter the book id of book %d of shelf %d: ", j+1, i+1);
            scanf("%d", &lib[i][j]);
        }
    }
    for (int i = 0; i < shelf; i++)
    {
        printf("\nShelf %d:", i+1);
        for (int j = 0; j < num; j++)
        {
            printf("\tID: %d", lib[i][j]);
        }
    }
    return 0;
}