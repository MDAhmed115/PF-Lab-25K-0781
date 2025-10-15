#include <stdio.h>
int main()
{
    int students[10], max = -10000, min = 100000000, avg = 0, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += students[i];
        if (students[i] > max)
        {
            max = students[i];
        }
        if (students[i] < min)
        {
            min = students[i];
        }
    }
    avg = sum / 10;
    printf("Maximum marks: %d\nMinimum marks: %d\nAverage marks: %d", max, min, avg);
    return 0;
}