#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sumdigits(int num){
    if (num < 10){
        return num;
    }
    else{
        return sumdigits(num / 10) + num % 10;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits is: %d", sumdigits(num));
    return 0;
}
