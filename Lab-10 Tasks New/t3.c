#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(){
    int valid = 0, found = 0;
    char codes[100][20] = {"OFF1234", "DIS5678", "KHI1234"};
    printf("Enter a promo code: ");
    char promo[20];
    fgets(promo, sizeof(promo), stdin);
    promo[strcspn(promo, "\n")] = '\0';
    for (int i = 0; i < 3; i++){
        if ((promo[i] >= 'A' && promo[i] <= 'Z') || (promo[i] >= 'a' && promo[i] <= 'z')){
            valid = 1;
        }
        else{
            valid = 0;
            break;
        }
    }
    if (valid){
        for (int i = 3; i < 7; i++){
            if (promo[i] >= '0' && promo[i] <= '9'){
                valid = 1;
            }
            else{
                valid = 0;
                break;
            }
        }
    }
    if (valid){
        for (int i = 0; i < 100; i++){
            if (strcmp(codes[i], promo) == 0){
                found = 1;
                break;
            }
            else{
                if (strlen(codes[i]) == 0){
                    strcpy(codes[i], promo); 
                    break;
                }
            }
        }
    }
    else{
        printf("Invalid code!\n");
    }
    if (found){
        printf("Code already used!\n");
    }
    else{
        printf("Redeemed!\n");
    }
    // int c;
    // while ((c = getchar()) != '\n' && c != EOF);
    printf("\nPress any key to continue...");
    getchar();
    return 0;
}