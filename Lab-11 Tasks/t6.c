#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int roll;
};

int main() {
    struct Student students[100];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].age, &students[i].roll);
    }

    for (i = 0; i < n; i++) {
        printf("%s %d %d\n", students[i].name, students[i].age, students[i].roll);
    }

    return 0;
}
