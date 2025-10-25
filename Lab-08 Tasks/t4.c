#include <stdio.h>
int main(){
    int sum = 0;
    int marks[3][3] = {{78, 77, 85}, {88, 89, 90}, {90, 91, 92}}; // 2D array for 3 students with 3 subjects each
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        printf("Marks of Student %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", marks[i][j]);
            sum += marks[i][j];
        }
        printf("\tTotal Marks: %d\n", sum);
    }
    return 0;
}