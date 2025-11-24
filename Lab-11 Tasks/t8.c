#include <stdio.h>

void ticket() {
    static int num = 0;
    num++;
    printf("%d\n", num);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        ticket();
    return 0;
}
