#include <stdio.h>

int isPalindrome(char s[], int left, int right) {
    if (left >= right)
        return 1;
    if (s[left] != s[right])
        return 0;
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    char s[100];
    int len = 0;
    scanf("%s", s);
    while (s[len] != '\0')
        len++;
    if (isPalindrome(s, 0, len - 1))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
