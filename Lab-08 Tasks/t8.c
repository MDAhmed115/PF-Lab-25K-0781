#include <stdio.h>
int main()
{
    int prod, branch, sumbranch = 0, total = 0;
    printf("Enter the number of products: ");
    scanf("%d", &prod);
    printf("Enter the number of branches: ");
    scanf("%d", &branch);
    int arr[prod][branch][7];
    for (int i = 0; i < prod; i++)
    {
        for (int j = 0; j < branch; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                printf("Enter the sales of product %d in branch %d on day %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < prod; i++)
    {
        total = 0;
        for (int j = 0; j < branch; j++)
        {
            sumbranch = 0;
            for (int k = 0; k < 7; k++)
            {
                sumbranch += arr[i][j][k];
            }
            printf("Sales of product %d in branch %d: %d\n", i + 1, j + 1, sumbranch);
            total += sumbranch;
        }
        printf("Total sales of product %d: %d\n", i + 1, total);
    }
    return 0;
}