#include <stdio.h>

struct Car {
    char model[50];
    int year;
};

struct Driver {
    char name[50];
    int age;
    struct Car car;
};

int main() {
    struct Driver d;
    struct Driver *ptr = &d;

    scanf("%s %d", ptr->name, &ptr->age);
    scanf("%s %d", ptr->car.model, &ptr->car.year);

    printf("%s %d\n", ptr->name, ptr->age);
    printf("%s %d\n", ptr->car.model, ptr->car.year);

    return 0;
}