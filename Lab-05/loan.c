#include <stdio.h>

int main() {
    char loanType;
    int salary, creditScore;
    float interest;

    printf("Enter loan type (h = Home, c = Car, o = Other): ");
    scanf(" %c", &loanType);

    interest = (loanType == 'h' || loanType == 'H') 
                ? (printf("Enter salary: "), scanf("%d", &salary), (salary > 100000 ? 8.0 : 10.0))
                : (loanType == 'c' || loanType == 'C') 
                    ? (printf("Enter credit score: "), scanf("%d", &creditScore), (creditScore > 700 ? 9.0 : 12.0))
                    : 15.0;

    printf("Applicable Interest Rate: %.1f%%\n", interest);

    return 0;
}
