#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countUpper(const char *s) {
    if (*s == '\0') return 0;
    return (isupper((unsigned char)*s) ? 1 : 0) + countUpper(s + 1);
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int result = countUpper(str);
    printf("%d\n", result);

    return 0;
}
