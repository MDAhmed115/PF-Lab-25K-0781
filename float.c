#include <stdio.h>
int main(){
    float num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("\nThe float number with 3 decimal places is: %.3f", num);
    printf("\nThe float number with 6 decimal places is: %.6f", num);
    return 0;
}