#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    if (exp < 0)
        return 0;
    printf("%d\n", power(base, exp));
    return 0;
}
