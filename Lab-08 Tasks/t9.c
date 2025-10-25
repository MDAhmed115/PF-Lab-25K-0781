#include <stdio.h>
int main(){
    int pat, sum = 0;
    printf("Enter the number of patients in each ward: ");
    scanf("%d", &pat);
    int hospital[2][pat][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < pat; j++)
        {
            printf("Enter temperatures (in degree F) for patient %d in ward %d:\n", j+1, i+1);
            for (int k = 0; k < 3; k++)
            {
                printf("%s: ", k == 0 ? "Morning": (k == 1 ? "Afternoon": "Evening"));
                scanf("%d", &hospital[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        sum = 0;
        for (int j = 0; j < pat; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += hospital[i][j][k];
            }
        }
        printf("Average temperature for ward %d: %d\n", i+1, sum/(pat*3));
    }
    return 0;
}